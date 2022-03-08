#include "tas.h"

//création des tas
void creerTas(TasMin *t, char x) {
  t->taille = 1;
  t->s = 1;
  t->arbre[1]= x;
}

//affiche la valeur
char valeur(TasMin *t) {
  return t->arbre[1];
}

//entasser les tas
void entasser(TasMin *t, char x) {
  t->taille ++;
  t->s ++;
  t->arbre[t->s] = x;
  reorganiserAsc(t, t->s);
}

//reorganiser l'arbre
/*
s : sommet à partir du quel on commence la reorganisation
*/
void reorganiserAsc(TasMin *t, int s) {
  if (s != RACINE) {
    if (t->arbre[s] < pere(s))
    {
      permuter(t, s, s/2);
      reorganiserAsc(t, s/2);
    } 
    
  }
}

char pere(TasMin *t, int s) {
  return t->arbre[s/2];
}
