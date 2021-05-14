#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

main() {

  enfileirar(1);
  enfileirar(2);
  enfileirar(3);
  exibir();

  printf("\n")
  printf("Desenfileirando ");
  printf("\n%i\n" , desenfileirar());
  printf("%i\n" , desenfileirar());
  printf("%i\n" , desenfileirar());
  exibir();

  printf("\n")
  printf("Esvaziando\n");
  esvaziar();
  
  

  

  system("pause");
  
}
//g++ -g -o out.exe main.c fila.c