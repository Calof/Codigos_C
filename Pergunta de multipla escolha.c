#include <stdio.h>
int main()
{
int res;
printf("Quais são os tipos de entrada que o metodo 'switch' aceita ? \n\n");
printf("1 - O metodo switch aceita a entrada de apenas 'string' ou em c 'char'.\n");
printf("2 - O metodo switch aceita a entrada de todos os tipos de dados .\n");
printf("3 - O metodo switch aceita a entrada de float ou double.\n");
printf("4 - O metodo switch aceita a entrada de apenas char ou int.\n\n");
printf("Digite o numero da resposta correta.\n");
scanf("%d",&res);
switch (res)
{
case 1:
    printf("resposta incorreta a resposta certa é a 4");
break;
case 2:
    printf("resposta incorreta a resposta certa é a 4");
break;
case 3:
    printf("resposta incorreta a resposta certa é a 4");
break;
case 4:
    printf("a resposta esta certa é a 4");
break;
default:
    printf("Valor digitado incorreto só aceitamos entrada de 1 a 4");
break;
}
break;
return 0;
}