//palimdrom
#include<stdio.h>
int main (){  
    int k=1;
    for (int i=1; i<=4; i++){
        for (int j=1; j<=4; j++){ 
            if (j<=i){
              printf("%d ",k);
              k++;
            }
        }
        printf("\n");
    }
return 0;
}