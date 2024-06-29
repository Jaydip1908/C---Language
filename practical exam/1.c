#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,sum=0,anti=0;   //diagonal sum of array

    printf("Enter size of row and collum array :");
    scanf("%d %d",&m ,&n);

    printf("enter array : \n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    //diagonal sum 
    printf("2d array matrix ::\n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
           if (i==j){
             sum= sum + a[i][j];
           }
           
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    //Anti-diagonal 
     printf("2d array matrix ::\n");
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
           if (i+j==2){
             anti= anti + a[i][j];
           }
           
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
        printf("diagonal sum element %d \n",sum);
        printf("Anti diagonal sum element %d \n",anti);

return 0;
}