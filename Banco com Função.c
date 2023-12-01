#include <stdio.h>
int f, sw, n;
char s;

int sacar()
{
    printf("Digite o quanto voce quer sacar\n");
    scanf("%d", &f);
    n += -f;
    printf("seu saudo é de :  %d\n", n);
}
int depositar()
{
    printf("Digite o quanto voce quer depositar\n");
    scanf("%d", &f);
    n += f;
    printf("seu saudo é de : %d\n", n);
}

int main()
{

    while (s != 'n')
    {
        printf("Digite s se deseja continuar\n");
        scanf(" %c", &s);
        printf("Se voce deseja depositar digite 1 caso queira sacar digite 2\n");
        scanf(" %d", &sw);
        switch (sw)
        {
        case 1:
            depositar(n);
            break;
        case 2:
            sacar(n);
            break;
        default:
            printf("O valor digitado não é aceito");
            break;
        }
    }
    printf("seu saudo final é de : %d", n);

    return 0;
}
