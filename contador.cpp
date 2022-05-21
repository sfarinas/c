#include<stdio.h>
#include<string.h>
main()
{

    char nome[30];
    int indice tamanho = 0, cont = 0;
    printf("\n\t INFORME UM NOME: ");
    scanf ("%s", &nome);
    tamanho = strlen(nome);
    for (indice = 1; indice <= tamanho -1; indice++)
    {
        if (nome[indice] == 'a' || nome[indice] == 'A')
        cont++;
    }
    printf("\n O nome %s ", (nome));
    printf("tem %d letra a ", cont');

}
