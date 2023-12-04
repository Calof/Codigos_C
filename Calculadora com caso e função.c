#include <stdio.h>
int a, b, n;
char c;

int Mult(int a, int b)
{ // função de *
    n = a * b;
    printf("%d * %d = %d\n", a, b, n);
}

int Div(int a, int b)
{ // função de /
    n = a / b;
    printf("%d / %d = %d\n", a, b, n);
}

int Menos(int a, int b)
{ // função de -
    n = a - b;
    printf("%d - %d = %d\n", a, b, n);
}

int Mais(int a, int b)
{ // função de +
    n = a + b;
    printf("%d + %d = %d\n", a, b, n);
}

int calculator(int a, int b, char c) // calculadora com case chamando função
{
    printf("Escolha o primeiro numero\n");
    scanf("%d", &a);
    printf("Escolha o segundo numero\n");
    scanf("%d", &b);
    printf("Digite a função de + - * /\n");

    scanf(" %c", &c);
    switch (c)
    {

    case '+':
        Mais(a, b);
        break;
    case '-':
        Menos(a, b);
        break;
    case '*':
        Mult(a, b);
        break;
    case '/':
        Div(a, b);
        break;

    default:
        printf("O valor digitado não é aceito");
        break;
    }
}
int main()
{
    calculator(a, b, c); // chamando calculadora e passando os valores
    return 0;
}