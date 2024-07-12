#include <stdio.h>
 
int main() {
 
    int n1, n2, i, sum=0;
    
    scanf("%d %d", &n1, &n2);
    
    if(n1>n2){
        for(i=n2; i<=n1; i++){
            if(i%13!=0){
                sum += i;
            }
        }
    }
    
    if(n2>n1){
        for(i=n1; i<=n2; i++){
            if(i%13!=0){
                sum += i;
            }
        }
    }
    
    printf("%d\n", sum);
 
    return 0;
}
