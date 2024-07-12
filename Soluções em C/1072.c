#include <stdio.h>
 
int main() {
 
    int n, i, dentro=0, fora=0;
    
    scanf("%d", &n);
    
    int v[n];
    
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        if(v[i]>=10 && v[i]<=20){
            dentro++;
        }
        else{
            fora++;
        }
    }
    
    printf("%d in\n", dentro);
    printf("%d out\n", fora);
 
    return 0;
}
