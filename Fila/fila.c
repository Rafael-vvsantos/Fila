#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 5

int fila[TAM_FILA], ultimaPosicao , primeiroPosicao;

void inicializador()
{
    primeiroPosicao = 0;
    ultimaPosicao = -1;
}

bool vazia()
{
    return primeiroPosicao > ultimaPosicao;
}

bool cheia()
{
    return ultimaPosicao > TAM_FILA;
}

bool enfileirar(int valor)
{
    if (cheia())
    {
        return false;
    }
    else
    {
        ultimaPosicao++;
        fila[ultimaPosicao] = valor;
        return true;
    }
}

bool desinfileirar(int valor)
{

    if (vazia())
    {
        return false;
    }
    else
    {
        primeiroPosicao++;
        fila[primeiroPosicao] = primeiroPosicao;
        return true;
    }
}

void exibir()
{
    for (int i = 0; i < TAM_FILA; i++)
    {
        printf("%i\n", fila[i]);
    }
}
