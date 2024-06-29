//1.WAP to get & print 2D array of N elements.
#include<stdio.h>
int main(){
    int a[50][50],m,n,i,j;
    printf(" enter siz row&col :");
   scanf("%d %d",&m,&n);

   printf(" enter matr:");
   
   for (i=0;i<m;i++)
   {
    for (j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    
   }

   
   printf("\n enter matr2:");
   
   for (i=0;i<m;i++)
   {
    for (j=0;j<n;j++)
    {
        printf("%d",a[i][j]);
    }
    
    printf("\n");
   }
return 0;
}