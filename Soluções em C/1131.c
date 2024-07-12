#include <stdio.h>
 
int main() {
    
    int n, gi, gg, count=0, countInt=0, countGre=0, countEmp=0;
 
    do{
       
       count++;
       
       scanf("%d %d", &gi, &gg);
       
       printf("Novo grenal (1-sim 2-nao)\n");
       scanf("%d", &n);
       
       if(n!=1 && n!=2){
           while(n!=1 || n!=2){
               scanf("%d", &n);
               if(n==1 || n==2){
                   break;
               }
           }
       }
       
       if(gi>gg){
           countInt++;
       }
       else if(gi==gg){
           countEmp++;
       }
       else{
           countGre++;
       }
    }
    while(n!=2);
    
    printf("%d grenais\n", count);
    printf("Inter:%d\n", countInt);
    printf("Gremio:%d\n", countGre);
    printf("Empates:%d\n", countEmp);
    
    if(countInt>countGre){
        printf("Inter venceu mais\n");
    }
    else if(countGre>countInt){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Nao houve vencedor\n");
    }
 
    return 0;
}
