#include <stdio.h>
#include <stdbool.h>

bool even(int num);

int main(void)
{
    int N, P;
    scanf("%i", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%i", &array[i]);
    }
    scanf("%i", &P);

    if (P == 0)
    {
        for (int i = 0; i < N; i++)
        {
            if (even(array[i]) == true)
            {
                printf("%i ", array[i]);
            }
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (even(array[i]) == false)
            {
                printf("%i ", array[i]);
            }
        }
    }
}

bool even(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}