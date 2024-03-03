/*
    verifica de um numero inteiro é primo
*/

#include <bits/stdc++.h>

/*Verificação recursiva se n é um número natural primo*/
bool primo(int num, int i = 2) {
  if (num <= 1)
    return false;

  if (i <= num / 2) {
    if (num % i == 0)
      return false;
    else
      return primo(num, i + 1);
  }

  return true;
}

int main() {
  int n;
  std::cin >> n;

  if (primo(n) == true)
    std::cout << n << " é primo" << std::endl;
  else
    std::cout << n << " não é primo" << std::endl;

  return 0;
}