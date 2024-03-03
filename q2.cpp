/*
   Escreva um programa para converter e imprimir os caracteres para os valores
   ASCII de 0 a 127. O programa deve imprimir 10 caracteres por linha.
*/

#include <bits/stdc++.h>

/*
    compile: g++ -o q2.o q2.cpp
    execute: ./q2
*/

void to_ascii(int n = 0, int count = 0) {
  if (n >= 127)
    return;

  std::cout << static_cast<char>(n) << " ";

  if (++count == 10){
    std::cout << std::endl;
    count = 0;
  }

  to_ascii(n + 1, count);
}

int main() {
  to_ascii();
  std::cout << std::endl;

  return 0;
}