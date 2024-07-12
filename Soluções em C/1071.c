#include <stdio.h>
#include <math.h>

int main() {
 
    int x, y, i, n=0;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(x>y){
        if(abs(y)%2==0){
        	i=1;
            while(y+i<x){
                n += y+i;
                i += 2;
            }
        }
        if(abs(y)%2==1){
            i=2;
            while(y+i<x){
                n += y+i;
                i += 2;
            }
        }
    }
    if(y>x){
    	if(abs(x)%2==0){
    		i=1;
    		while(x+i<y){
    			n += x+i;
    			i += 2;
			}
		}
		if(abs(x)%2==1){
			i=2;
			while(x+i<y){
				n += x+i;
				i += 2;
			}
		}
	}
    printf("%d\n", n);
    
    return 0;
    
}
