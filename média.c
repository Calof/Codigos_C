#include <stdio.h>
int main()
{
    float n1,n2,media;
    scanf("%f,%f",&n1,&n2);
    media = (n1+n2)/2;
    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
    {
        printf("Notas invalidas");
    }
    else if (media >= 6)
    {
        printf("APROVADO");
    }
        else if (media >= 4)
        {
            printf("RECUPERAÇÃO");
        }
        else
            {
                printf("REPROVADO");
            }
    return 0;
}
