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

LDC creerLDC() {
    LDC L;
    L = (LDC)malloc(sizeof(ListDC));
    if (L != NIL) {
        L->taille = 0;
        L->celEntete = NIL;
        L->celEnqueue = NIL;
        L->cle = NIL;
    }
    return L;
}

