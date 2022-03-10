#include "interfaceLDC.h"

curseur creerCellule(char c)
{
    curseur cel = (curseur)malloc(sizeof(Cellule));
    if (cel != NIL) {
        cel->v = c;
        cel->celSuiv = NIL;
        cel->celPrec = NIL;
    }
    return cel;
}

