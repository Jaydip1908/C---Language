  
    #include <stdio.h>
    void main ()
    {
 
        static int array[10][10];
        int i, j, m, n, a = 0, sum = 0;
 
        printf("Enetr the order of the matix \n");
        scanf("%d %d", &m, &n);
 
 
            printf("Enter the co-efficients of the matrix\n");
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    scanf("%d", &array[i][j]);
                }
            }
return 0;
}