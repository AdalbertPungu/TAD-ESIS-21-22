// Importations

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "complex.h"

// type abstrait  nombre complexe

typedef struct complex{
  float r; // Partie Réelle
  float i; // Partiie Imaginaire
} complex;

// Implémentation des primitives

complex C_new (double r, double i) {
  complex c;
  c.r = r;
  c.i = i;
  return c;
}

complex C_add (complex a,  complex b) {
  complex c;
  c.r = a.r + b.r;
  c.i = a.i + b.i;
  return c;
}

complex C_mul (complex a,  complex b) {
  complex c;
  c.r = (a.r * b.r) - (a.i * b.i);
  c.i = (a.i * b.r) + (a.r * b.i);
  return c;
}

double  C_module (complex c) {
  double m;
  m = sqrt(pow(c.r, 2) + pow(c.i, 2));
  return m;
}

bool C_compare (complex a, complex b) {
  return a.r == b.r && a.i == b.i;  
}

void C_print(complex a) {
  printf("(r=%.1f, i=%.1f)\n", a.r, a.i);
}
