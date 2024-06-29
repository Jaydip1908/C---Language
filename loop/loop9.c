//calculate the factorial of n

#include <stdio.h>
int main()
{
    int i=1,n,f=1;
    printf("\n enter no :");
    scanf("%d", &n);
    while (i<=n)
    {
        f*=i;
        i++;
    }
    printf("factorial is %d" ,f);
     return 0;
}