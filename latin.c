#include <stdio.h>

int latin(int size, int range, int array[]);

int main(void)
{
    int R, C, finalr, finalc;
    scanf("%i", &R);
	scanf("%i", &C);
    int array[R][C], col[R], row[C];

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%i", &array[i][j]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            row[j] = array[i][j];
        }
        finalr = latin(C, C+R, row);
        printf("%i ", finalr);
    }
    printf("\n");
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            col[j] = array[j][i];
        }
        finalc = latin(R, C+R, col);
        printf("%i ", finalc);
    }
    return 0;
}



int latin(int size, int range, int array[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j] || array[i] > range || array[j] > range)
            {
                return 0;
            }
        }
    }
    return 1;
}