#include <stdio.h>
 
int main() {
 
    int k[5], i, p=0, P=0, n=0, I=0;
    
    for(i=0; i<5; i++){
        scanf("%d", &k[i]);
        if(k[i]>0){
            p++;
        }
        if(k[i]<0){
            n++;
        }
        if(k[i]%2==0){
            P++;
        }
        if(k[i]%2==1){
            I++;
        }
    }
    
    printf("%d valor(es) par(es)\n", P);
    printf("%d valor(es) impar(es)\n", I);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);
 
    return 0;
}
