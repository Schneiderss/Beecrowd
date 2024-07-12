#include <stdio.h>
#include <math.h>

int main() {
 
    double A, B, C, d, r1, r2;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if(pow(B,2)>=4*A*C && A!=0){
        
        d = pow(B,2)-4*A*C;
        r1 = (-B+sqrt(d))/(2*A);
        r2 = (-B-sqrt(d))/(2*A);
        
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    
    else{
        
        printf("Impossivel calcular\n");
    }
 
    return 0;
}
