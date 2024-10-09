#include <stdio.h>
 
int main() {
 
    int v, N[10], i;
    
    scanf("%d", &v);
    
    for(i=0; i<10; i++){
        N[i] = v*pow(2, i);
    }
    
    for(i=0; i<10; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
 
    return 0;
}
