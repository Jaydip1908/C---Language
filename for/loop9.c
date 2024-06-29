// find the factorial of n using
#include<stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("enter no :");
    scanf("%d",&n);

    for (;i<=n;i++)
    {
     fact = fact*i;
    }
    printf(" \n factorial is %d is :%d", n ,fact);
    return 0;
}