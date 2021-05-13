#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    int valor;
    void inicializador();

    enfileirar(1);
    enfileirar(2);
    enfileirar(3);
    

    if (desinfileirar(valor))
    {
        printf("Valor que saiu da fila %i" , valor);
    }else{
        printf("\nFila vazia!");
    }

    system("pause");
}
//g++ -g -o out.exe main.c fila.c