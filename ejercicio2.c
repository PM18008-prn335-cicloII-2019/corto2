

#include <stdio.h>
#include <stdlib.h>


    
int main() {
    int a ,b;
    printf("Ingrese a:");
    scanf("%d",&a);
    printf("Ingrese b:");
    scanf("%d",&b);
    printf("a=%d b=%d\n" ,a ,b);
    intercambiar(&a,&b);
    printf("a=%d b=%d\n" ,a ,b);
    
    return 0;
}

void intercambiar(int *x, int *y){
    
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
}
 


