//6. Write C program to find sum of diagonal elements of a matrix.
#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,sum=0;
    printf("enter size of row and colume::");
    scanf("%d %d",&m,&n);

    printf("enter elements:");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
       scanf("%d ",&a[i][j] );
       } 
    }
    printf("\n matrix \n");
     for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
        if (i==j)
        {
            sum=sum+a[i][j];
        }
        
       printf("%d",a[i][j] );
       
       } 
       printf("\n");
    }
     printf("\n diagonal sum = %d",sum);
     return 0;
}
