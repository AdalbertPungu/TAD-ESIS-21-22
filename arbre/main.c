#include <stdlib.h>
#include <stdio.h>
#include "arbreBinaire.c"

int main(int argc, char const *argv[])
{
  sommet a = creerArbreBinaire('A');
  printf("%c", a->info);
  
  return 0;
}
