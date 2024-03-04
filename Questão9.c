#include <stdio.h>

int multi_recursiva(int x1, int x2)
{
    // Caso base: se x2 for igual a 0, o resultado da multiplicação é 0
    if (x2 == 0)
    {
        return 0;
    }
    // Caso base: se x2 for igual a 1, o resultado da multiplicação é x1
    else if (x2 == 1)
    {
        return x1;
    }
    // Caso recursivo: reduzindo x2 em 1 e somando x1 ao resultado da multiplicação recursiva
    else
    {
        return x1 + multi_recursiva(x1, x2 - 1);
    }
}

int main()
{
    int x1 = 5;
    int x2 = 4;
    int resultado = multi_recursiva(x1, x2);
    printf("O resultado da multiplicacao de %d por %d e: %d\n", x1, x2, resultado);
    return 0;
}
