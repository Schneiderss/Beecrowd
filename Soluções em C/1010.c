#include <stdio.h>
 
int main() {
    
    int x1, y1, x2, y2;
    float v1, v2;
    
    scanf("%i %i %f", &x1, &y1, &v1);
    scanf("%i %i %f", &x2, &y2, &v2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", y1*v1+y2*v2);
 
    return 0;
}
