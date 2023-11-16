#include <stdio.h>
int main()
{
   float ps, al, imc, id;
   printf("Digite o seu peso \n");
   scanf("%f", &ps);
   printf("Digite sua altura \n");
   scanf("%f", &al);
   imc = ps / (al * al);
   if (imc >= 30)
   {
      id = 20 * (al * al);
      printf("Seu imc é de: %f  Obesidade: seu peso ideal é de %f \n", imc, id);
   }
   else if (imc < 30)
   {
      id = 20 * (al * al);
      printf("Seu imc é de: %f  Sobrepeso: seu peso ideal é de %f \n", imc, id);
   }
   else if (imc < 25)
   {
      id = 20 * (al * al);
      printf("Seu imc é de: %f  Normal: seu peso ideal é de %f \n", imc, id);
   }
   else if (imc < 18.5)
   {
      id = 20 * (al * al);
      printf("Seu imc é de: %f  Baixo: seu peso ideal é de %f \n", imc, id);
   }
   return 0;
}