// print sum 1 to n
#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("\n enter no :");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("sum is %d", sum);
    return 0;
}