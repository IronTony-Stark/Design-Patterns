#include <iostream>
#include "YouTuber.h"
#include "Channel.h"

using namespace std;

int main() {
    YouTuber tony("Tony");
    YouTuber sylva("Sylva");
    YouTuber max("Max");
    YouTuber elon("Elon");
    YouTuber elliot("Elliot");
    YouTuber luna("Luna");

    auto* proGramm = new Channel("ProGramm");
    auto* super = new Channel("Super");
    auto* wat = new Channel("WAT");

    tony.subscribe(proGramm);
    tony.subscribe(super);
    tony.subscribe(wat);

    sylva.subscribe(wat);

    elon.subscribe(proGramm);

    max.subscribe(proGramm);
    max.subscribe(wat);

    luna.subscribe(wat);

    proGramm->createNewVideo("Pro Programmer in 1 minute!");
    proGramm->notify();

    super->createNewVideo("Superhumans are real");
    super->notify();

    wat->createNewVideo("What a Terrible Failure");
    wat->notify();

    delete proGramm;
    delete super;
    delete wat;
}
