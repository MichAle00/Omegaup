#include <stdio.h>

int main(void)
{
    float *n, *p, sum, f, s;
    scanf("%f %f", &f, &s);
    n = &f;
    p = &s;
    sum = *p + *n;
    printf("%f", sum);
}