#include <stdio.h>
#include <math.h>

int main() {
 
    int n, i;
    
    scanf("%d", &n);
    
    for(i=2; i<n+1; i+=2){
        printf("%d^2 = %d\n", i, i*i);
    }
 
    return 0;
}
