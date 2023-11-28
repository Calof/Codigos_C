#include <stdio.h>
int main()
{
    float l1,l2,l3;
    printf("Digite o primeiro lado do triangulo\n");
    scanf("%f", &l1);
    printf("Digite o segundo lado do triangulo\n");
    scanf("%f", &l2); 
    printf("Digite o terceiro lado do triangulo\n");
    scanf("%f", &l3); 
    if ((l1 < l2 + l3) && (l2 < l3 + l1) && (l3 < l1 + l2))
    {
        if (l1 == l2 && l3 == l1)
        {
            printf("é um triangulo Equilatero \n");
        }
        else if (l1 != l2 && l3 != l1  )
        {
             printf("é um triangulo Escaleno \n");
        }
        else
        {
          printf("é um triangulo Isósceles\n");  
        }   
    } 
    else 
    {
        printf("Este valor informado não é um triangulo\n");
    }
    return 0;
}
