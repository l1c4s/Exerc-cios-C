#include <stdio.h>


int main()
{
    int n1,n2;
    printf("Digite dois numeros: ");
    scanf("%d%d",&n1,&n2);
    
    if(n1>n2)
        printf("%d e maior que %d",n1,n2);
    
    else if(n2>n1)    
       printf("%d e maior que %d",n2,n1);
      
    else
        printf("Numeros iguais");
    
    return 0;
}
