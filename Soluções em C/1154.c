#include <stdio.h>
 
int main() {
 
    int idade, sum=0, count=0;
    
    scanf("%d", &idade);
    
    while(idade>0){
        sum += idade;
        count++;
        scanf("%d", &idade);
    }
    
    printf("%.2f\n", (float)sum/count);
 
    return 0;
}
