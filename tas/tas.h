#include <stdio.h>
#include <stdlib.h>

#define T_MAX 100
#define RACINE 1
#define VIDE 1
typedef struct TasMin
{
  int arbre[T_MAX];
  int s;
  int taille;
} TasMin;

void creerTas(TasMin *t, char x);
char valeur(TasMin *t);
void entasser(TasMin *t, char x);
void supprimer(TasMin *t);
void reorganiserAsc(TasMin *t, int s);
char pere(TasMin *t, int s);
char permuter(TasMin *t, int s1, int s2);
char filsG(TasMin *t, int s);
char filsD(TasMin *t, int s);
char getValeur(TasMin *t, int s);
void reorganisrDsc(TasMin *t, int s);
