#include <stdio.h>
 
int main() {
 
    int n, fib1=0, fib2=1, i, atual;
    
    scanf("%d", &n);
    
    if(n==1){
        printf("%d\n", fib1);
    }
    
    else if(n==2){
        printf("%d %d\n", fib1, fib2);
    }
    
    else{
        printf("%d %d ", fib1, fib2);
        for(i=3; i<n; i++){
            printf("%d ", fib1 + fib2);
            atual = fib2;
            fib2 = fib1 + fib2;
            fib1 = atual;
        }
        printf("%d\n", fib1 + fib2);
    }
 
    return 0;
}
