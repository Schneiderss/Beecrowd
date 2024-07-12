#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if (a < b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        float temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        float temp = b;
        b = c;
        c = temp;
    }
    
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } 
    else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO RETANGULO\n");
        }
        else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && b != c) || (a != b && b == c)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}
