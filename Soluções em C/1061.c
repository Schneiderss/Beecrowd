#include <stdio.h>
 
int main() {
 
    int d1, h1, m1, s1, d2, h2, m2, s2;
    char p1[10], p2[10];
    
    scanf("%s %d", p1, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", p2, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    
    int ti = s1+m1*60+h1*3600+d1*86400;
    int tf = s2+m2*60+h2*3600+d2*86400;
    
    int diferenca = tf - ti;
    
    int df, hf, mf, sf;
    
    df = diferenca/86400;
    diferenca = diferenca%86400;
    hf = diferenca/3600;
    diferenca = diferenca%3600;
    mf = diferenca/60;
    diferenca = diferenca%60;
    sf = diferenca;
    
    printf("%d dia(s)\n", df);
    printf("%d hora(s)\n", hf);
    printf("%d minuto(s)\n", mf);
    printf("%d segundo(s)\n", sf);
 
    return 0;
}
