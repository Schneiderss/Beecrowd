#include <stdio.h>

int main() {
 
    int h1, m1, h2, m2;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    if(h1==h2 && m1==m2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        if(h1>h2){
            if(m1>m2){
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 23-h1+h2, 60-m1+m2);
            }
            else{
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-h1+h2, m2-m1);
            }
        }
        else if(h2>h1){
            if(m1>m2){
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", abs(h2-h1-1), 60-m1+m2);
            }
            else{
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2-h1, m2-m1);
            }
        }
        else{
            if(m1>m2){
                printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", 60-m1+m2);
            }
            else{
                printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", m2-m1);
            }
        }
        
    }
    
    return 0;
}
