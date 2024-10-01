#include <stdio.h>
 
int main() {
    
    int x, sum=0, i;
    
    scanf("%d", &x);
 
    while(x!=0){
        
        for(i=0; i<5; i++){
            if(x%2==0){
                sum += x + 2*i;
            }
            else{
                sum += x + 1 + 2*i;
            }
        }
        
        printf("%d\n", sum);
        scanf("%d", &x);
        sum =0;
    }
 
    return 0;
}
