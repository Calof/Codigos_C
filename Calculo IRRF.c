#include <stdio.h>
int main()
{
    float sl, dc;
    printf("Digite o salario \n");
    scanf("%f", &sl);

    if (sl <= 1903)
    {
        printf("isento\n");
    }
    else if (sl <= 2826)
    {
        dc = sl * 0.075;
        sl = sl - dc;
        printf("Seu salario com o desconto de 7,5%%: %2.f é %2.f\n", dc, sl);
    }
    else if (sl <= 3.751)
    {
        dc = sl * 0.15;
        sl = sl - dc;
        printf("Seu salario com o desconto de 15%%: %2.f é %2.f\n", dc, sl);
    }
    else if (sl <= 4.664)
    {
        dc = sl * 0.225;
        sl = sl - dc;
        printf("Seu salario com o desconto de 22,5%%: %2.f é %2.f\n", dc, sl);
    }
    else
    {
        dc = sl * 0.275;
        sl = sl - dc;
        printf("Seu salario com o desconto de 27,5%%: %2.f é %2.f\n", dc, sl);
    }
    return 0;
}
