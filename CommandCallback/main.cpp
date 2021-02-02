//
// Created by Vladyslav Synytsyn on 02/02/2021.
//

#include <iostream>
#include "BusinessLogic.h"
#include "GetResourceCommand.h"
#include "SendResourceCommand.h"
#include "UI.h"

int main(){
    BusinessLogic businessLogic;

    GetResourceCommand copyCommand(businessLogic);
    SendResourceCommand pasteCommand(businessLogic);

    UI ui(copyCommand, pasteCommand);

    ui.btnGetClick();
    ui.shortcutGetEnter();

    ui.btnSendClick();
    ui.shortcutSendEnter();
};