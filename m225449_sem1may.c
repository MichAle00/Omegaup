#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nx, ny;
    printf("Cantidad de numeros: ");
    scanf("%i", &ny);
    printf("Cantidad de caracteres: ");
    scanf("%i", &nx);

    int *n = malloc(sizeof(int) * ny);
    char *c = malloc(sizeof(char) * nx);

    if (n == NULL || c == NULL)
    {
        printf("Error a la hora de allocar memoria");
        return 1;
    }
    printf("Numeros:\n");
    for (int i = 0; i < ny; i++)
    {
        scanf("%i", n + i);
    }
    fflush(stdin);
    printf("Caracteres:\n");
    for (int i = 0; i < nx; i++)
    {
        scanf("%c", c + i);
        fflush(stdin);
    }
    printf("Numeros: \n");
    for (int i = 0; i < ny; i++)
    {
        printf("%i ", *(n + i));
    }
    printf("\nLetras: \n");
    for (int i = 0; i < nx; i++)
    {
        printf("%c ", *(c + i));
    }

    free(n);
    free(c);
}