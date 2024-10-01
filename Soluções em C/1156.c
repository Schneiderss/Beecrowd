#include <stdio.h>
#include <math.h>
 
int main() {
 
    int i;
    float sum=0;
    
    for(i=1; i<=20; i++){
        sum += (1.0 + (i-1)*2.0)/pow(2, i-1);
    }
 
    printf("%.2f\n", sum);
 
    return 0;
}
