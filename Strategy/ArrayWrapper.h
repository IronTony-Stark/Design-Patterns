//
// Created by Iron Tony on 05/05/2020.
//

#ifndef STRATEGY_ARRAYWRAPPER_H
#define STRATEGY_ARRAYWRAPPER_H

#include "AArray.h"
#include "ISortingStrategy.h"

template<typename T, template<typename> class TypeStrategy>
class ArrayWrapper : public AArray<T> {
public:
    explicit ArrayWrapper(const size_t size) : mAllocator(new T[size]{}), mSize(size) {}

    ArrayWrapper(const ArrayWrapper& arr) : mAllocator(new T[arr.mSize]{}), mSize(arr.mSize) {
        copy(arr);
    }

    ArrayWrapper(ArrayWrapper&& arr) noexcept: mAllocator(arr.mAllocator), mSize(arr.mSize) {
        arr.mAllocator = nullptr;
    }

    ArrayWrapper& operator=(const ArrayWrapper& arr) {
        if (this != &arr) {
            del();
            delete[] mAllocator;

            mSize = arr.mSize;

            mAllocator = new T[mSize]{};
            copy(arr);
        }

        return *this;
    }

    ArrayWrapper& operator=(ArrayWrapper&& arr) noexcept {
        if (this != &arr) {
            del();
            delete[] mAllocator;

            mSize = arr.mSize;

            mAllocator = arr.mAllocator;
            arr.mAllocator = nullptr;
        }

        return *this;
    }

    ~ArrayWrapper() override {
        del();
        delete[] mAllocator;
    }

    T& operator[](size_t i) override {
        if (i >= mSize) throw IndexOutOfBounds(i);

        return mAllocator[i];
    }

    const T& operator[](size_t i) const override {
        if (i >= mSize) throw IndexOutOfBounds(i);

        return mAllocator[i];
    }

    void sort() {
        mSortingStrategy->sort(*this);
    }

    void setSortingStrategy(ISortingStrategy<T>* sortingStrategy) {
        delete mSortingStrategy;
        mSortingStrategy = sortingStrategy;
    }

    size_t size() override { return mSize; }

    void show() const override {
        for (size_t i = 0; i < mSize; ++i) {
            const auto p = TypeStrategy<T>::view(mAllocator[i]);

            if (p != nullptr) std::cout << *p;
            else std::cout << "nullPointer";

            std::cout << " ";
        }
    }

    class IndexOutOfBounds : public std::exception {
    public:
        explicit IndexOutOfBounds(const size_t index) : mIndex(index) {}

        const char* what() const noexcept override {
            return "IndexOutOfBounds: " + mIndex;
        }

    private:
        size_t mIndex;
    };

private:
    T* mAllocator;
    size_t mSize;
    ISortingStrategy<T>* mSortingStrategy = nullptr;

    void copy(const ArrayWrapper& arr) {
        for (size_t i = 0; i < mSize; ++i)
            TypeStrategy<T>::assign(mAllocator[i], arr[i]);
    }

    void del() {
        for (int i = 0; i < mSize; ++i)
            TypeStrategy<T>::doDelete(mAllocator[i]);
    }
};

template<size_t N, typename T, template<typename> class EntryType>
class ArrayWrapper<T[N], EntryType>;

template<typename T, template<typename> class EntryType>
class ArrayWrapper<T[], EntryType>;

template<typename T, template<typename> class EntryType>
std::ostream& operator<<(std::ostream& os, const ArrayWrapper<T, EntryType>& a) {
    a.show();

    return os;
}

#endif //STRATEGY_ARRAYWRAPPER_H
