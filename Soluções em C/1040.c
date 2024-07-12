#include <stdio.h>
 
int main() {
 
    double N1, N2, N3, N4, media, n;
    
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    
    media = (2*N1+3*N2+4*N3+N4)/10;
    
    printf("Media: %.1lf\n", media);
    
    if(media>=7){
        printf("Aluno aprovado.\n");
    }
    
    else if(media<5){
        printf("Aluno reprovado.\n");
    }
    
    else if(media<7 && media>=5){
        
        printf("Aluno em exame.\n");
        scanf("%lf", &n);
        printf("Nota do exame: %.1lf\n", n);
        
        media = (media+n)/2;
        
        if(media>=5){
            printf("Aluno aprovado.\n");
        }
        
        else if(media<5){
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1lf\n", media);
    }
 
    return 0;
}
