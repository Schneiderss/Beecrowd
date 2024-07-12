#include <stdio.h>
 
int main() {
 
    double v[6];
    int p=0;
    
    for(int i=0; i<6; i++){
        scanf("%lf", &v[i]);
        if(v[i]>0){
            p++;
        }
    }
    
    printf("%d valores positivos\n", p);
 
    return 0;
}
