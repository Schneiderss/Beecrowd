#include <stdio.h>
 
int main() {
 
    char nome[20];
    double fixo, total;
    
    scanf("%s", &nome);
    scanf("%lf", &fixo);
    scanf("%lf", &total);
    
    printf("TOTAL = R$ %.2lf\n", fixo+0.15*total);
 
    return 0;
}
