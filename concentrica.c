#include <stdio.h>
#include <math.h>

int iscon(int size, int rings, int array[size][size]);

int main(void)
{
    int n;
    scanf("%i", &n);
    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%i", &array[i][j]);
        }
    }

    float rings = round(n / 2.0);

    int result = iscon(n, rings,array);
    printf("%i", result);
}

int iscon(int size, int rings, int array[size][size])
{
    for (int i = 0; i < rings; i++)
    {
        int target = i;
        for (int j = i; j < size - i; j++)
        {
             for (int k = i; k < size - i; k++)
             {
                if (array[j][k] != target || array[k][j] != target)
                {
                    return 0;
                }
             }
             break;
        }
    }
    return 1;
}