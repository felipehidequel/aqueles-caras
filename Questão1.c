#include <stdio.h>

int main()
{
    int num[5];

    // Lendo cinco numero
    printf("Digite cinco numeros entre 1 e 30:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] < 1 || num[i] > 30)
        {
            printf("Por favor, digite um numero entre 1 e 30.\n");
            return 1;
        }
    }

    printf("Asteriscos correspondentes:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < num[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
