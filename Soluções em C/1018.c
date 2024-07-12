#include <stdio.h>
 
int main() {
 
    int d, c, cin, v, dez, cinco, dois, u;
    
    scanf("%d", &d);
    
    c = d/100;
    cin = (d-100*c)/50;
    v = (d-c*100-cin*50)/20;
    dez = (d-c*100-cin*50-v*20)/10;
    cinco = (d-c*100-cin*50-v*20-dez*10)/5;
    dois = (d-c*100-cin*50-v*20-dez*10-cinco*5)/2;
    u = d-c*100-cin*50-v*20-dez*10-cinco*5-dois*2;
    
    printf("%d\n", d);
    printf("%d nota(s) de R$ 100,00\n", c);
    printf("%d nota(s) de R$ 50,00\n", cin);
    printf("%d nota(s) de R$ 20,00\n", v);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", u);
 
    return 0;
}
