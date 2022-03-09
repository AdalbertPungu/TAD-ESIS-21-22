// Importations

#include "interfacePile.c"

int main(int argc, char const *argv[])
{
  Pile p;

  creerPile(&p);
  
  empiler(&p, 'a');
  empiler(&p, 'b');
  empiler(&p, 'c');
  empiler(&p, 'g');

  empiler(&p, 'a');
  empiler(&p, 'b');
  empiler(&p, 'c');
  empiler(&p, 'g');

  empiler(&p, 'a');
  empiler(&p, 'b');
  empiler(&p, 'c');
  empiler(&p, 'g');

  printf("%c", valeur(&p));

  return 0;
}
