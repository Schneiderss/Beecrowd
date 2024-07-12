#include <stdio.h>
 
int main() {
 
    int n, i, j;
    
    scanf("%d", &n);
    
    int v[n], k[n], s[n];
    
    for(i=0; i<n; i++){
        s[i] = 0;
    }
    
    for(i=0; i<n; i++){
        scanf("%d %d", &v[i], &k[i]);
    }
    
    for(i=0; i<n; i++){
        if(v[i]>k[i]){
            j = k[i]+1;
            for(j; j<v[i]; j++){
                if(j%2!=0){
                    s[i]+=j;
                }
            }
        }
        else if(k[i]>v[i]){
            j = v[i]+1;
            for(j; j<k[i]; j++){
                if(j%2!=0){
                    s[i]+=j;
                }
            }
        }
        else if(v[i]==k[i]){
            s[i]==0;
        }
    }
    
    for(i=0; i<n; i++){
        printf("%d\n", s[i]);
    }
 
    return 0;
}
