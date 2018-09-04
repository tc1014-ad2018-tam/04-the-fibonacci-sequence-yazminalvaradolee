/*
 * Este programa esta diseñado para que el usuario ponga
 * un numero y este mismo te de toda la serie de los numeros
 * fibonacci.
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * Fecha:3 de septiembre del 2018
 */

#include <stdio.h>

int main() {
    //Aqui voy a poner el numero de variables y a lo que es igual
 int a = 0, b = 1, c, n, i;
 // n es el numero de series
 printf("Enter the number of terms:");
 scanf("%d", &n);
 //Aqui te voy a dar la serie de fibonacci
 printf("Fibonacci Series:");
 printf("%d %d ", a, b);
 // i = 3 porque ya habiamos puesto 2 terminos
 // y la operacion para que te de la dicha serie dependiendo de sus variables
 for (i = 3; i <= n; i++) {
  c = a + b;
  printf("%d ", c);
  a = b;
  b = c;
 }
 return 0;
}