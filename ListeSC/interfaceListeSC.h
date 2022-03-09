#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define TAILLEMaX 15     
#define NIL -1

typedef int curseur;

typedef struct cellule{
  char val;
  curseur idSuiv;
} Cellule;

typedef struct listSC{
  int taille;
  Cellule tab[TAILLEMaX];
  curseur premier;
  curseur cle;
  curseur prLibre;
}listSC;

