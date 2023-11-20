#include <stdio.h>
int i = 1, j, n;

int numero(int i)
{
    printf("A leitura parara se digitar 0\n");
    while (i != 0)
    {
        printf("Digite o numero positivo\n");
        scanf("%d", &i);
        j += i;     // somatória dos numeros
        if (i != 0)
        {           // função para não contar o numero 0 digitado
            n++;    // contador de numeros digitados
        }
    }
    j = j / n;
    printf("média dos numeros digitados é %d", j);
}

int main()
{
    numero(i);

    return 0;
}