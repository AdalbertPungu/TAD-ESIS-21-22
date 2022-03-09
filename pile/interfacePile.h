// Importations

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define TAILLEMax 10     
#define NIL -1

typedef int curseur;

typedef struct cellule{
  char val;
  curseur prec;
} Cellule;

typedef struct pile{
  int taille;
  Cellule tab[TAILLEMax];
  curseur sommet;
}Pile, *pile;

// primitives

void creerPile(pile p);
int pilePleine(pile p);
int pileVide(pile p);
void empiler(pile p, char val);
void depiler(pile p);
char valeur(pile p);
void detruire(pile p);
