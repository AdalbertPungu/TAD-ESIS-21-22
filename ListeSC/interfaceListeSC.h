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

/*  IMPLEMENTATION DES PRIMITIVES PAR TABLEAU STATIQUE */

void creerListe(listSC *L);

curseur prendreCellule(listSC *L);

void insereEnTete(listSC *L, char  c);

void insereApres(listSC *L, char  c);

void suivant(listSC *L);

void debutListe(listSC *L);

int listeVide(listSC *L);

char valeur(listSC *L);

curseur getCleListe(listSC *L);

void setCleListe(listSC *L, curseur p);

void rendreCelluleA(listSC *L, curseur p );

void supprimeEnTete(listSC *L);

void supprimeApres(listSC *L);

int listePleine(listSC *L);

/*   FIN      DE PRIMITIVES       */
