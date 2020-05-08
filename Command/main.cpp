#include "BusinessLogic.h"
#include "UI.h"

int main() {
    BusinessLogic businessLogic;

    CopyCommand copyCommand(businessLogic);
    PasteCommand pasteCommand(businessLogic);

    UI ui(copyCommand, pasteCommand);

    ui.btnCopyClick();
    ui.shortcutCopyEnter();

    ui.btnPasteClick();
    ui.shortcutPasteEnter();
}
