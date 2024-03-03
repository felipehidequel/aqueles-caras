#include <stdio.h>
#include <math.h>

// função para encontrar e imprimir triplos pitagoricos até o valor de n
void triplos_pitagoricos(int n)
{
    printf("Triplos pitagoricos para n = %d:\n", n);
    //// Loop para iterar sobre todos os possíveis valores do primeiro cateto (cateto1)
    for (int cateto1 = 1; cateto1 <= n; cateto1++)
    {
        // Loop para iterar sobre todos os possíveis valores do segundo cateto (cateto2)
        // Começamos do valor do cateto1 para evitar repetições (por exemplo, (3, 4, 5) e (4, 3, 5) são equivalentes)
        for (int cateto2 = cateto1; cateto2 <= n; cateto2++)
        {
            // Calcula o valor da hipotenusa usando o Teorema de Pitágoras (sqrt(a^2 + b^2))
            double hipote = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
            // Verifica se a hipotenusa é um número inteiro e não excede o limite n
            if (hipote <= n && hipote == (int)hipote)
            {
                // Se o triplo (cateto1, cateto2, hipotenusa) é válido, imprime-o
                printf("(%d, %d, %d)\n", cateto1, cateto2, (int)hipote);
            }
        }
    }
}

int main()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Erro: n deve ser um inteiro positivo.\n");
        return 1;
    }

    triplos_pitagoricos(n);
    return 0;
}
