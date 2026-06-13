#include "../music/Playable.h"
#include "../music/String/Veena.h"
#include "../music/wind/Saxophone.h"

int main() {
    Veena veena;
    veena.play();

    Saxophone saxophone;
    saxophone.play();

    Playable* p;

    p = &veena;
    p->play();

    p = &saxophone;
    p->play();
}
