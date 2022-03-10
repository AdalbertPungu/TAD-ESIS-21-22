#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NIL 0

typedef struct Cellule Cellule;
typedef struct Cellule *curseur;

typedef struct ListDC ListDC;
typedef struct ListDC *LDC;

struct Cellule
{
    char v;
    curseur celSuiv;
    curseur celPrec;
};

struct ListDC
{
    curseur celEntete;
    curseur celEnqueue;
    int taille;
    curseur cle;
};

curseur creerCellule(char c);
LDC creerLDC();
void suivant(LDC L);
void setQueue(LDC L);
void insererEntete(LDC L, char c);
void insererApres(LDC L, char c);
void debutList(LDC L);

