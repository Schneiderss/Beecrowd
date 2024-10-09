#include <stdio.h>
 
int main() {
 
    char o;
    double m[12][12], sum=0;
    int i, j, n;
    
    scanf("%c", &o);
    
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    
    for(i=11; i>6; i--){
        if(i==11){
            for(j=1; j<11; j++){
            sum += m[i][j];
            }
        }
        else if(i==10){
            for(j=2; j<10; j++){
                sum += m[i][j];
            }
        }
        else if(i==9){
            for(j=3; j<9; j++){
                sum += m[i][j];
            }
        }
        else if(i==8){
            for(j=4; j<8; j++){
                sum += m[i][j];
            }
        }
        else if(i==7){
            for(j=5; j<7; j++){
                sum += m[i][j];
            }
        }
    }
    
    switch(o){
        case 'S':
            printf("%.1lf\n", sum);
        break;
        case 'M':
            printf("%.1lf\n", sum/30);
        break;
    }
 
    return 0;
}
