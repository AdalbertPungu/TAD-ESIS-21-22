#include "tas.c"

int main(int argc, char const *argv[])
{
  TasMin t;
  creerTas(&t, 'D');
  entasser(&t, 'C');
  entasser(&t, 'B');
  entasser(&t, 'A');
  entasser(&t, 'G');
  supprimer(&t);
  supprimer(&t);
  printf("%c\n", valeur(&t)); 

  printf("racine : %c\n", valeur(&t));
  printf("filsG : %c\n", filsG(&t, RACINE));
  printf("racine : %c\n", filsD(&t, RACINE));
  
  return 0;
}
