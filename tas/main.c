#include "tas.c"

int main(int argc, char const *argv[])
{
  TasMin t;
  creerTas(&t, 'D');
  printf("%c\n", valeur(&t));
  entasser(&t, 'C');
  printf("%c\n", valeur(&t));
  entasser(&t, 'B');
  printf("%c\n", valeur(&t));
  entasser(&t, 'A');
  printf("%c\n", valeur(&t));
  entasser(&t, 'G');
  printf("%c\n", valeur(&t)); 

  return 0;
}
