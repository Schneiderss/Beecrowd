#include <stdio.h>
 
int main() {
 
    int x, y;
    float n;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%f", &n);
    
    printf("NUMBER = %d\n", x);
    printf("SALARY = U$ %.2f\n", n*y);
 
    return 0;
}
