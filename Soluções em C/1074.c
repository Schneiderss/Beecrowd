#include <stdio.h>
 
int main() {
 
    int n, i;
    
    scanf("%d", &n);
    
    int v[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    for(i=0; i<n; i++){
        if(v[i]==0){
            printf("NULL\n");
        }
        if(abs(v[i])%2==0 && v[i]<0){
            printf("EVEN NEGATIVE\n");
        }
        if(v[i]%2==0 && v[i]>0){
            printf("EVEN POSITIVE\n");
        }
        if(abs(v[i])%2==1 && v[i]<0){
            printf("ODD NEGATIVE\n");
        }
        if(v[i]%2==1 && v[i]>0){
            printf("ODD POSITIVE\n");
        }
    }
    return 0;
}
