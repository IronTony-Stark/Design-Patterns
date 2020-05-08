#include "Citizen.h"
#include "Foreigner.h"
#include "LanguageAdapter.h"

int main() {
    Citizen citizen;
    Foreigner foreigner;

//    citizen.understandNativeSpeaker(foreigner); // won't work
//    foreigner.understandForeignLanguage(citizen); // won't work

    LanguageAdapter translator(citizen, foreigner);
    citizen.understandNativeSpeaker(translator);
    foreigner.understandForeignLanguage(translator);
}
