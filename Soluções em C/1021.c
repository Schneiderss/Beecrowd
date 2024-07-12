#include <stdio.h>

int main() {

    double reais;
    int centavos, cem, cin, vin, dez, cinco, dois, um, half, vc, d, c, one;
    
    scanf("%lf", &reais);
    
    centavos = reais * 100;
    cem = centavos / 10000;
    centavos %= 10000;
    cin = centavos / 5000;
    centavos %= 5000;
    vin = centavos / 2000;
    centavos %= 2000;
    dez = centavos / 1000;
    centavos %= 1000;
    cinco = centavos / 500;
    centavos %= 500;
    dois = centavos / 200;
    centavos %= 200;
    um = centavos / 100;
    centavos %= 100;
    half = centavos / 50;
    centavos %= 50;
    vc = centavos / 25;
    centavos %= 25;
    d = centavos / 10;
    centavos %= 10;
    c = centavos / 5;
    centavos %= 5;
    one = centavos;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cin);
    printf("%d nota(s) de R$ 20.00\n", vin);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", half);
    printf("%d moeda(s) de R$ 0.25\n", vc);
    printf("%d moeda(s) de R$ 0.10\n", d);
    printf("%d moeda(s) de R$ 0.05\n", c);
    printf("%d moeda(s) de R$ 0.01\n", one);
 
    return 0;
}
