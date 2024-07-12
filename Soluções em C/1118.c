#include <stdio.h>
 
int main() {
    
    int n;
    float n1, n2;
 
    do{
        scanf("%f", &n1);
        
        while(n1<0 || n1>10){
            printf("nota invalida\n");
            scanf("%f", &n1);
        }
        
        scanf("%f", &n2);
        
        while(n2<0 || n2>10){
            printf("nota invalida\n");
            scanf("%f", &n2);
        }
        
        printf("media = %.2f\n", (n1+n2)/2);
        
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &n);
        
        if(n!=1 && n!=2){
            while(n!=1 || n!=2){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &n);
                if(n==1 || n==2){
                    break;
                }
            }
        }
    }
    while(n!=2);
 
    return 0;
}
