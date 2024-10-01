#include <stdio.h>
 
int main() {
 
    int n, i, j, sum=0;
    
    scanf("%d", &n);
    
    int v[n], u[n];
    
    for(i=0; i<n; i++){
        scanf("%d %d", &v[i], &u[i]);
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<u[i]; j++){
            if(v[i]%2==0){
                sum += v[i] + 1 + 2*j;
            }
            else{
                sum += v[i] + 2*j;
            }
        }
        printf("%d\n", sum);
        sum =0;
    }
 
    return 0;
}
