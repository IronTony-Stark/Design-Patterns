//
// Created by Iron Tony on 07/05/2020.
//

#ifndef FACTORY_METHOD_MATERIALUI_H
#define FACTORY_METHOD_MATERIALUI_H

#include "AUI.h"
#include "MaterialImage.h"
#include "MaterialTextField.h"
#include "MaterialButton.h"

class MaterialUI : public AUI {
public:
    IUIElement* createImage() override {
        auto* materialImage = new MaterialImage();
        materialImage->load();
        return materialImage;
    }

    IUIElement* createTextField() override {
        auto* materialTextField = new MaterialTextField();
        materialTextField->text("Cool Text");
        return materialTextField;
    }

    IUIElement* createButton() override {
        auto* materialButton = new MaterialButton();
        materialButton->onClick([]() { std::cout << "Setting Button callback\n"; });
        return materialButton;
    }
};

#endif //FACTORY_METHOD_MATERIALUI_H
