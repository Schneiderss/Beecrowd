#include <stdio.h>
 
int main(){
 
    int x, y, sum;
    
    scanf("%d %d", &x, &y);
    
    while(x>0 && y>0){
    	sum = 0;
        if(x>y){
        	int i;
        	i=y;
            for(i; i<x+1; i++){
            	printf("%i ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
        else{
        	int i;
        	i=x;
            for(i; i<y+1; i++){
            	printf("%i ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
        scanf("%d %d", &x, &y);
    }
    return 0;
}
