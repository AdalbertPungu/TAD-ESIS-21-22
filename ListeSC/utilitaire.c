#include "interfaceListeSC.c"

listSC tranStrToLSC(char *s) {
  listSC L;
  creerListe(&L);
  int i;
  for (i=strlen(s)-1; i>=0; i--) {
    insereEnTete(&L, s[i]);
  }
  return L;
}

