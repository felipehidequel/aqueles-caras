/*
    Escreva um programa que leia cinco números (cada um entre 1 e 30).
    Para cada número lido, seu programa deve imprimir uma linha contendo
    aquele número de esteriscos adjacentes. Por exemplo, se seu programa
    lê o número sete, ele deve imprimir *******.
*/

#include <bits/stdc++.h>

/*
    Compile: g++ -o q1 q1.o
    execute: q1 <int> <int> <int> <int> <int>
*/

void cout_ast(int n) {
  if (n == 0)
    return;

  std::cout << "*";
  cout_ast(n - 1);
}

int main(int argc, char *argv[]) {
  if (argc < 6) {
    std::cerr << "Erro! Informe 5 valores como argumento" << std::endl;
    exit(1);
  }

  int *n = new int[5];

  for (int i = 0; i < 5; i++) {
    n[i] = strtol(argv[i + 1], NULL, 10);
    if (n[i] < 1 || n[i] > 30) {
      std::cerr << "Informe valores no intervalo de {1..30}" << std::endl;
      exit(1);
    }
  }

  for (int i = 0; i < 5; i++) {
    cout_ast(n[i]);
    std::cout << std::endl;
  }

  delete[] n;
  return 0;
}