#include <stdio.h>
 
int main() {
 
    double s;
    
    scanf("%lf", &s);
    
    if(s<=2000){
        printf("Isento\n");
    }
    if(s>2000 && s<=3000){
        printf("R$ %.2lf\n", (s-2000)*0.08);
    }
    if(s>3000 && s<=4500){
        printf("R$ %.2lf\n", 80+(s-3000)*0.18);
    }
    if(s>4500){
        printf("R$ %.2lf\n", 350+(s-4500)*0.28);
    }
 
    return 0;
}
