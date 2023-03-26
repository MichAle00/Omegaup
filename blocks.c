#include <stdio.h>
#include <math.h>

int main(void)
{
    int N, count = 0, result = 0, top = 1;
    scanf("%i", &N);

    while (result < N)
    {
        top += 2;
        result += top * top;
        count++;
    }
    printf("%i", count);
}