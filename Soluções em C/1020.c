#include <stdio.h>
 
int main() {
 
    int d, a, m, D;
    
    scanf("%i", &d);
    
    a = d/365;
    m = (d-a*365)/30;
    D = d-a*365-m*30;
    
    printf("%i ano(s)\n", a);
    printf("%i mes(es)\n", m);
    printf("%i dia(s)\n", D);
 
    return 0;
}
