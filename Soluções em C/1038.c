#include <stdio.h>
 
int main() {
 
    int c, q;
    
    scanf("%d %d", &c, &q);
    
    if(c==1){
        printf("Total: R$ %.2f\n", q*4.0);
    }
    
    else if(c==2){
        printf("Total: R$ %.2f\n", q*4.5);
    }
    
    else if(c==3){
        printf("Total: R$ %.2f\n", q*5.0);
    }
    
    else if(c==4){
        printf("Total: R$ %.2f\n", q*2.00);
    }
    
    else if(c==5){
        printf("Total: R$ %.2f\n", q*1.5);
    }
    
    return 0;
}
