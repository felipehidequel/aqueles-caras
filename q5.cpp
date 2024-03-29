/*
    Escreva dois programas que recebem como parâmetro três inteiros
    representando os coeficientes de uma função do segundo grau e execute

    a) O teste para saber se essa função tem raízes reais;
    b) O valor das raízes reais.
*/

#include <bits/stdc++.h>

int has_real_roots(int a, int b, int c, double *delta);
void baskra(int a, int b, int c, double delta);

int main() {
  double delta = 0;
  std::cout << "Informe os coeficientes da função quadrada (a,b,c)"
            << std::endl;
  int a, b, c;
  std::cin >> a >> b >> c;

  if (has_real_roots(a, b, c, &delta) == -1)
    std::cout << " A função não possui raizes reais." << std::endl;

  if (has_real_roots(a, b, c, &delta) >= 0)
    baskra(a, b, c, delta);

  return 0;
}

int has_real_roots(int a, int b, int c, double *delta) {
  *delta = pow(b, 2) - (4 * a * c);

  /*não possui raiz real*/
  if (*delta < 0)
    return -1;
  /*Há duas raízes reais e distintas*/
  else if (*delta > 0)
    return 1;
  /*Há duas raízes reais e iguais*/
  return 0;
}

void baskra(int a, int b, int c, double delta) {
  double x1 = (-b + sqrt(delta)) / (2 * a);
  double x2 = (-b - sqrt(delta)) / (2 * a);

  std::cout << "x1= " << x1 << std::endl;
  std::cout << "x2= " << x2 << std::endl;
}