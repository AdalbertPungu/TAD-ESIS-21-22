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
    if (t->arbre[s] < pere(t, s))
    {
      permuter(t, s, s/2);
      reorganiserAsc(t, s/2);
    } 
    
  }
}

char pere(TasMin *t, int s) {
  return t->arbre[s/2];
}

char permuter(TasMin *t, int s1, int s2) {
  char a = t->arbre[s1];
  t->arbre[s1] = t->arbre[s2];
  t->arbre[s2] = a;
}

void supprimer(TasMin *t){
    t->taille --;
    t->arbre[RACINE] = t->arbre[t->s];
    t->s --;
    reorganisrDsc(t, RACINE);
}

char filsG(TasMin *t, int s) {
  if(s*2 <= t->taille)
    return t->arbre[s*2];
  else
    return '-';
}

char filsD(TasMin *t, int s) {
  if(s*2+1 <= t->taille)
    return t->arbre[s*2+1];
  else
    return '-';
}

void reorganisrDsc(TasMin *t, int s) {
  char fg = filsG(t, s);
  char fd = filsD(t, s);
  char v = getValeur(t, s);
  if ((fg != VIDE && fd != VIDE && fg <= fd && fg < v) || (fg != VIDE && fg < v)) {
    permuter(t, s, s*2+1);
    reorganisrDsc(t, s*2+1);
  } else if (fd != VIDE && fd < v) {
    permuter(t, s, s*2);
    reorganisrDsc(t, s*2);
  } 
  
}

