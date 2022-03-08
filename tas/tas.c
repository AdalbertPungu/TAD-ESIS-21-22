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
    int pos = t->s;
    if(pos >1){
        int index_p = 1;
        t->arbre[1] = t->arbre[pos-1];
        char p = t->arbre[index_p];
        char fg = t->arbre[index_p * 2];
        char fd = t->arbre[index_p * 2 + 1];
        if(fg < fd && fg < p){
            t->arbre[index_p * 2] = p;
            t->arbre[index_p] = fg;
        }
        if(fd < fg && fd < p){
            t->arbre[index_p * 2 + 1] = p;
            t->arbre[index_p];
        }
        t->s --;
    }

}

char filsG(TasMin *t, int s) {
  if(s*2 <= t->taille)
    return t->arbre[s*2];
  else
    return '-';
}

