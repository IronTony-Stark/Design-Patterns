//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_UI_H
#define COMMAND_UI_H


#include "ICommand.h"
#include "Button.h"
#include "Shortcut.h"

class UI {
public:
    explicit UI(const ICommand& getResource, const ICommand& sendResource)
            : mBtnGet(getResource), mBtnSend(sendResource),
              mShortcutGet(getResource), mShortcutSend(sendResource) {}

    void btnGetClick() {
        mBtnGet.onClick();
    }

    void btnSendClick() {
        mBtnSend.onClick();
    }

    void shortcutGetEnter() {
        mShortcutGet.onEnter();
    }

    void shortcutSendEnter() {
        mShortcutSend.onEnter();
    }

private:
    Button mBtnGet;
    Button mBtnSend;

    Shortcut mShortcutGet;
    Shortcut mShortcutSend;
};

#endif //COMMAND_UI_H
