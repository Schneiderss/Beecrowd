#include <stdio.h>

float sum(float m[12][12]);
int i, j;

int main() {
 
    char O;
    float M[12][12];
    
    scanf("%c", &O);
    
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f", &M[i][j]);
        }
    }
    
    switch(O){
        case 'S':
            printf("%.1f\n", sum(M));
        break;
        case 'M':
            printf("%.1f\n", sum(M)/30);
        break;
    }
 
    return 0;
}

float sum(float m[12][12]){
	float sum=0;
    for(j=7; j<12; j++){
        if(j==7){
            for(i=5; i<7; i++){
                sum += m[i][j];
            }
        }
        else if(j==8){
            for(i=4; i<8; i++){
                sum += m[i][j];
            }
        }
        else if(j==9){
            for(i=3; i<9; i++){
                sum += m[i][j];
            }
        }
        else if(j==10){
            for(i=2; i<10; i++){
                sum += m[i][j];
            }
        }
        else if(j==11){
            for(i=1; i<11; i++){
                sum += m[i][j];
            }
        }
    }
    return sum;
}
