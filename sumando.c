#include <stdio.h>

int main(void)
{
    int n, count = 0;
    scanf("%i", &n);
    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%i", &array[i][j]);
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count += array[j][i];
        }
        printf("%i ", count);
        count = 0;
    }
}