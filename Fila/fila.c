#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 3

int fila[TAM_FILA], ultimaPosicao = 0;

void enfileirar(int valor)
{
  if (cheia())
  {
    printf("Fila cheia!\n");
  }
  else
  {
    fila[ultimaPosicao] = valor;
    ultimaPosicao++;
  }
}

int desenfileirar()
{
  int itemRetirado = 0;

  if (vazia())
  {
    printf(" Fila vazia! \n");
  }
  else
  {

    itemRetirado = fila[0];

    for (int i = 0; i < ultimaPosicao - 1; i++)
    {
      fila[i] = fila[i + 1];
    }

    ultimaPosicao--;
  }

  return itemRetirado;
}

int vazia()
{
  if (ultimaPosicao == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int cheia()
{
  if (ultimaPosicao == TAM_FILA)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void exibir()
{
  if (vazia())
  {
    printf("Fila vazia !\n");
  }
  else
  {
    for (int i = 0; i < ultimaPosicao; i++)
    {
      printf("%i\n", fila[i]);
    }
  }
}

void esvaziar()
{

  if (vazia())
  {
    printf(" Fila vazia! \n");
  }
  else
  {

    for (int i = 0; i < ultimaPosicao + TAM_FILA; i++)
    {
      fila[i] = fila[i + 1];
    }
  
    ultimaPosicao--;
  }


}