#include <stdio.h>
 
int main() {
 
    double n1, n2;
    
    scanf("%lf", &n1);
    
    while(n1<0 || n1>10){
        printf("nota invalida\n");
        scanf("%lf", &n1);
    }
    
    scanf("%lf", &n2);
    
	while(n2<0 || n2>10){
        printf("nota invalida\n");
        scanf("%lf", &n2);
    }
    
    if(n1>=0 && n1<=10 && n2>=0 && n2<=10){
        printf("media = %.2lf\n", (n1+n2)/2);
    }
 
    return 0;
}
