//
// Created by Iron Tony on 05/05/2020.
//

#include "ArrayWrapper.h"
#include "TypeStrategy.h"
#include "InsertionSort.h"
#include "MergeSort.h"

using namespace std;

const int size = 10;

class DoubleComparator {
public:
    static int compareTo(const double& a, const double& b) {
        if (a == b) return 0;
        if (a < b) return -1;
        return 1;
    }
};

void demoArrayOfValues() {
    ArrayWrapper<double, ValueStrategy> arr(size);
    cout << "initial arr: ";
    arr.show();

    for (int i = 0; i < size; ++i)
        arr[i] = i;
    cout << "\n";

    cout << "filled arr: ";
    arr.show();
    cout << "\n";
    cout << size / 2 << ": " << arr[size / 2] << "\n\n";

    ArrayWrapper<double, ValueStrategy> copy(arr);
    cout << "copy: " << copy << "\n";
    for (int i = 0; i < size; ++i)
        copy[i] = (size - i) * 10;
    cout << "changed copy: " << copy << "\n\n";

    arr = copy;
    cout << "arr = copy;\narr: ";
    arr.show();
    cout << "\n";
    cout << size / 2 << ": " << arr[size / 2] << "\n";

    arr.setSortingStrategy(new MergeSort<double, ValueStrategy, DoubleComparator>);
    arr.sort();
    cout << "MergeSort Sorted arr: ";
    arr.show();
    cout << "\n";

    arr[size / 3] = 150;
    cout << "Added 150: ";
    arr.show();
    cout << "\n";

    arr.setSortingStrategy(new InsertionSort<double, ValueStrategy, DoubleComparator>);
    arr.sort();
    cout << "InsertionSort Sorted arr: ";
    arr.show();
}

void demoArrayOfPointers() {
    ArrayWrapper<double*, PointerStrategy> arr(size);
    cout << "initial arr: ";
    arr.show();

    for (int i = 0; i < size; ++i)
        arr[i] = new double(i);
    cout << "\n";

    cout << "filled arr: ";
    arr.show();
    cout << "\n";
    cout << size / 2 << ": " << arr[size / 2] << "\n\n";

    ArrayWrapper<double*, PointerStrategy> copy(arr);
    cout << "copy: " << copy << "\n";
    for (int i = 0; i < size; ++i)
        copy[i] = new double((size - i) * 10);
    cout << "changed copy: " << copy << "\n\n";

    arr = copy;
    cout << "arr = copy;\narr: ";
    arr.show();
    cout << "\n";
    cout << size / 2 << ": " << arr[size / 2] << "\n";

    arr.setSortingStrategy(new MergeSort<double*, PointerStrategy, DoubleComparator>);
    arr.sort();
    cout << "MergeSort Sorted arr: ";
    arr.show();
    cout << "\n";

    *arr[size / 3] = 150;
    cout << "Added 150: ";
    arr.show();
    cout << "\n";

    arr.setSortingStrategy(new InsertionSort<double*, PointerStrategy, DoubleComparator>);
    arr.sort();
    cout << "InsertionSort Sorted arr: ";
    arr.show();
}

int main() {
    cout << "Array of values\n";
    demoArrayOfValues();
    cout << "\n\nArray of pointers\n";
    demoArrayOfPointers();
}
