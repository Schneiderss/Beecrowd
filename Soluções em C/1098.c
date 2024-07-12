#include <stdio.h>
 
int main() {
 
    float i;
    int j;
    
    for(j=1; j<=3; j++){
        printf("I=0 J=%d\n", j);
    }
    
    for(i=0.2; i<1; i+=0.2){
        for(j=1; j<=3; j++){
            printf("I=%.1f J=%.1f\n", i, j+i);
        }
    }
    
    for(j=1; j<=3; j++){
        printf("I=1 J=%d\n", j+1);
    }
    
    for(i=1.2; i<2; i+=0.2){
        for(j=1; j<=3; j++){
            printf("I=%.1f J=%.1f\n", i, j+i);
        }
    }
    
    for(j=1; j<=3; j++){
        printf("I=2 J=%d\n", j+2);
    }
 
    return 0;
}
