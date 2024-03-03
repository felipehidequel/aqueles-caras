#include <stdio.h>
#include <math.h>

//função para encontrar e imprimir triplos pitagoricos até o valor de n
void triplos_pitagoricos(int n)
{
    printf("Triplos pitagoricos para n = %d:\n", n);
    for (int cateto1 = 1; cateto1 <= n; cateto1++)
    {
        for (int cateto2 = cateto1; cateto2 <= n; cateto2++)
        {
            double hipote = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
            if (hipote <= n && hipote == (int)hipote)
            {
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
