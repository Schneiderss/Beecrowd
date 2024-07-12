#include <stdio.h>
 
int main(){
 
    int n;
    
    scanf("%d", &n);
    
    int m[n][2], i, j;
    
    for(i=0; i<n; i++){
        for(j=0; j<2; j++){
            scanf("%d", &m[i][j]);
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<2; j+=2){
            if(m[i][1]==0){
                printf("divisao impossivel\n");
            }
            else{
                printf("%.1f\n", (float)m[i][j]/m[i][j+1]);
            }
        }
    }
    
    return 0;
}
