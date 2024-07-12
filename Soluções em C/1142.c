#include <stdio.h>
 
int main() {
 
    int n, i;
    
    scanf("%d", &n);
    
    for(i=1; i<4*n; i+=4){
        if(i%4==0){
            continue;
        }
        printf("%d %d %d PUM\n", i, i+1, i+2);
    }
 
    return 0;
}
