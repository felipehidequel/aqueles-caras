#include <bits/stdc++.h>

std::string int_to_roman(int n) {
  std::string result = "";
  int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
  const char *numerals[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

  for (int i = 0; i < 9; ++i) {
    while (n >= values[i]) {
      result += numerals[i];
      n -= values[i];
    }
  }
  delete[] numerals;
  return result;
}

void print_roman_table() {
  std::cout << "-------------------------|" << std::endl;
  for (int i = 1; i <= 100; ++i)
    std::cout << std::setw(10) << i << std::setw(7) << "|" << std::setw(7)
              << int_to_roman(i) << std::endl;
  std::cout << "-------------------------|" << std::endl;
}

int main(int argc, char *argv[]) {

  print_roman_table();
  return 0;
}