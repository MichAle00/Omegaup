#include <stdio.h>
#include <stdbool.h>

bool gem(int num, int target);

int main(void)
{
    int n, k;
    scanf("%i", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &array[i]);
    }
    scanf("%i", &k);

    for (int i = 0; i < n; i++)
    {
        if (gem(array[i], k))
        {
            printf("%i ", array[i]);
        }
    }
}

bool gem(int num, int target)
{
    int max = target + 3, min = target - 3;
    bool re = num >= min && num <= max;
    if (num == target || re == true)
    {
        return true;
    }
    return false;
}