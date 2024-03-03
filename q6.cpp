/*
    Máximo Divisor Comum entre dois número inteiros;
*/
#include <bits/stdc++.h>

/*Maximo divisor comum entre dois numeros inteiros*/
int calc_mdc(int num1, int num2) {
  if (num2 == 0)
    return num1;

  int aux = num2;
  num2 = num1 % num2;
  return calc_mdc(aux, num2);
}

int main() {
  int n1, n2;
  std::cin >> n1 >> n2;
  std::cout << calc_mdc(n1, n2) << std::endl;
  return 0;
}