// leap year
#include <stdio.h>
int main()
{
    int i = 2000;
    while (i <= 3000)
    {
        if (i % 4 == 0)
        {
            printf(" %d \n ", i);
        }

        i++;
    }

    return 0;
}