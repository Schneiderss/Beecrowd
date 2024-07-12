#include <stdio.h>
 
int main() {
 
    int v[100], i, maior=0, posicao=0;
    
    for(i=0; i<100; i++){
        scanf("%d", &v[i]);
        if(v[i]>maior){
            maior = v[i];
            posicao = i+1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);
 
    return 0;
}
