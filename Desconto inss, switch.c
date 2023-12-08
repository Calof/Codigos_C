#include <stdio.h>

int main()
{
int salario;
float inss, sobra;

printf("Digite o salario  \n");
scanf("%d", &salario);

switch (salario)
{
case 10 ... 1212 :  
    inss = salario * 0.075;
    sobra = salario - inss;
    printf("O seu salario sem o desconto era de : %d\ncom o desconto de 7,5%%:%2.f INSS\nSalario com desconto:%2.f ", salario, inss,sobra);
break;

case 1212 ... 2427:
    inss = salario * 0.09;
    sobra = salario - inss;
    printf("O seu salario sem o desconto era de : %d\ncom o desconto de 9%%:%2.f INSS\nSalario com desconto:%2.f ", salario, inss,sobra);
break;

case 2427 ... 3641:
    inss = salario * 0.12;
    sobra = salario - inss;
    printf("O seu salario sem o desconto era de : %d\ncom o desconto de 12%%:%2.f INSS\nSalario com desconto:%2.f ", salario, inss,sobra);
break;

case 3641 ... 7087:
    inss = salario * 0.14;
    sobra = salario - inss;
    printf("O seu salario sem o desconto era de : %d\ncom o desconto de 14%%:%2.f INSS\nSalario com desconto:%2.f ", salario, inss,sobra);
break;


default:
    printf("Valor inserido não aceito");
break;
}

    return 0;
}
