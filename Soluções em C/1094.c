#include <stdio.h>

int main() {
 
    int n, i;
    
    scanf("%d", &n);
    
    char p[n];
    int v[n], ratos=0, sapos=0, coelhos=0, total=0;
    
    for(i=0; i<n; i++){
        scanf("%d %c", &v[i], &p[i]);
        if(p[i]=='R'){
            ratos += v[i];
        }
        if(p[i]=='S'){
            sapos += v[i];
        }
        if(p[i]=='C'){
            coelhos += v[i];
        }
        total += v[i];
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", coelhos*100.0/total);
    printf("Percentual de ratos: %.2lf %%\n", ratos*100.0/total);
    printf("Percentual de sapos: %.2lf %%\n", sapos*100.0/total);
 
    return 0;
}
