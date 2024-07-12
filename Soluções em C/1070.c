#include <stdio.h>
 
int main() {
 
    int x, i;
    
    scanf("%d", &x);
    
    if(x%2==0){
        i=1;
        while(i<13){
            printf("%d\n", x+i);
            i+=2;
        }
    }
    else if(x%2==1){
        i=0;
        while(i<11){
            printf("%d\n", x+i);
            i+=2;
        }
    }
 
    return 0;
}
