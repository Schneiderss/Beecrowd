#include <stdio.h>
 
int main() {
 
    int t, v;
    float l;
    
    scanf("%i", &t);
    scanf("%i", &v);
    
    l = v*t/12.0;
    
    printf("%.3f\n", l);
 
    return 0;
}
