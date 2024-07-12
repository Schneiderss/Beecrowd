#include <stdio.h>
 
int main() {
 
    int n, i;
    
    scanf("%d", &n);
    
    double m[n], x, y, z;
    
    for(i=0; i<n; i++){
        scanf("%lf %lf %lf", &x, &y, &z);
        m[i] = (2*x+3*y+5*z)/10;
    }
    for(i=0; i<n; i++){
        printf("%.1lf\n", m[i]);
    }
 
    return 0;
}
