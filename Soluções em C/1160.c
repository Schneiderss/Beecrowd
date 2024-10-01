#include <stdio.h>
 
int main() {
 
    int t, i, pa, pb, count;
    float g1, g2;
    
    scanf("%d", &t);
    
    for(i=0; i<t; i++){
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
        
        while(pa<=pb){
            pa += g1*pa/100;
            pb += g2*pb/100;
            count++;
            if(count>100){
            printf("Mais de 1 seculo.\n");
            break;
            }
        }
        
        if(count<=100){
            printf("%d anos.\n", count);
        }
        count = 0;
    }
 
    return 0;
}
