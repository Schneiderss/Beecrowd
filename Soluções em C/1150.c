#include <stdio.h>
 
int main() {
 
    int x, z, sum=0, count=0;
    
    scanf("%d", &x);
    scanf("%d", &z);
    
    while(z<=x){
        scanf("%d", &z);
    }
    
    while(sum<=z){
        sum += x;
        count++;
        x++;
    }
    
    printf("%d\n", count);
 
    return 0;
}
