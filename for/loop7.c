// leap year
#include <stdio.h>
int main()
{
    int i = 2000;

    for (i=2000;i<=3000;i++)
    {
        if (i % 4 == 0)
        {
            printf(" %d \n ", i);
        }
    }
   return 0;
}