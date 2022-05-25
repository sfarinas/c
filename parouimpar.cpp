#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int menor, maior, aux;
    int par = 0;

    setlocale (LC_ALL,"portuguese");
	
	printf ("============================\n");
	printf ("        Par ou Ímpar\n");
	printf ("============================\n");
    printf("Informe o número Inicial: \n");
    scanf("%d", &menor);
    printf("Informe o número Final: \n");
    scanf("%d", &maior);

    if (maior < menor)  {
        printf ("\nERRO: Número Final não pode ser menor que o número Inicial\n");
     }

    for (aux = menor; aux <= maior ; aux++)  {
        if (aux % 2 == 0) { 
            printf ("O número %i é par \n",aux);
            par++;
        }
        else {
            printf("O número %i é impar \n",aux);
        }
    }
    printf("Quantidade de números Pares: %d\n", par);
}
