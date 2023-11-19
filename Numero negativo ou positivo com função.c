#include <stdio.h>
int n;

int positivo(int n)
{
    printf("Digite um numero\n");
    scanf("%d",&n);
    if(n < 0){
        printf("numero negativo");
    }
    else{
        printf("numero positivo");
    }
}
int main(){
    
    positivo(n);
    return 0 ;
}