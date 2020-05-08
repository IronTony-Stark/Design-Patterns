//
// Created by Iron Tony on 08/05/2020.
//

#ifndef COMMAND_UI_H
#define COMMAND_UI_H

#include "Button.h"
#include "Shortcut.h"
#include "CopyCommand.h"
#include "PasteCommand.h"

class UI {
public:
    explicit UI(const ICommand& copyCommand, const ICommand& pasteCommand)
            : mBtnCopy(copyCommand), mBtnPaste(pasteCommand),
              mShortcutCopy(copyCommand), mShortcutPaste(pasteCommand) {}

    void btnCopyClick() {
        mBtnCopy.onClick();
    }

    void btnPasteClick() {
        mBtnPaste.onClick();
    }

    void shortcutCopyEnter() {
        mShortcutCopy.onEnter();
    }

    void shortcutPasteEnter() {
        mShortcutPaste.onEnter();
    }

private:
    Button mBtnCopy;
    Button mBtnPaste;

    Shortcut mShortcutCopy;
    Shortcut mShortcutPaste;
};

#endif //COMMAND_UI_H
