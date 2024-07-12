#include <stdio.h>
 
int main() {
    
    int n, countA=0, countG=0, countD=0;
    
    scanf("%d", &n);
 
    while(n!=4){
        if(n==1){
            countA++;
        }
        if(n==2){
            countG++;
        }
        if(n==3){
            countD++;
        }
        scanf("%d", &n);
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", countA);
    printf("Gasolina: %d\n", countG);
    printf("Diesel: %d\n", countD);
 
    return 0;
}
