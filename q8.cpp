/*
    Inverta um numero recursivamente
*/

#include <bits/stdc++.h>

int invert_digit(int num, int invert = 0) {
  if (num == 0)
    return invert;

  return invert_digit(num / 10, invert * 10 + num % 10);
}

int main() {
  int n;
  std::cin >> n;
  std::cout << invert_digit(n) << std::endl;

  return 0;
}