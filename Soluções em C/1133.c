#include <stdio.h>
 
int main() {
 
    int n1, n2, i;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    if(n1>n2){
        for(i=n2+1; i<n1; i++){
            if(i%5==2 || i%5==3){
                printf("%d\n", i);
            }
        }
    }
    
    if(n2>n1){
        for(i=n1+1; i<n2; i++){
            if(i%5==2 || i%5==3){
                printf("%d\n", i);
            }
        }
    }
 
    return 0;
}
