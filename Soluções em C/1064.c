#include <stdio.h>
 
int main() {
 
    double v[6], m=0;
    int p=0, i;
    
    for(i=0; i<6; i++){
        scanf("%lf", &v[i]);
        if(v[i]>0){
            p++;
            m += v[i];
        }
    }
    
    printf("%d valores positivos\n", p);
    printf("%.1lf\n", m/p);
 
    return 0;
}
