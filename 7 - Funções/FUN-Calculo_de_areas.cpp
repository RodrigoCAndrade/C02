/**
 * @file: FUN-Calculo_de_areas.cpp
 * @author: Rodrigo Andrade
 * @date: 24 Jun 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// Função para calcular a área do circulo.
double calcularAreaCirculo(double raio) { return 3.14159 * raio * raio; }

// Função para calcular a área do retângulo
double calcularAreaRetangulo(double base, double altura) {
  return base * altura;
}

// Função para calcular a área do triângulo
double calcularAreaTriangulo(double base, double altura) {
  return (base * altura) / 2;
}

int main() {
  // Variável para armazenar a forma geométrica escolhida
  string forma = "";

  // Duas variáveis para armazenar os valores necessários para calcular a área
  // de cada forma.
  float n1, n2;

  while (forma != "fim") {
    // Lendo a forma que será calculada a área.
    getline(cin >> ws, forma);

    // Caso a forma seja o comando `fim`, encerra-se o programa.
    if (forma == "fim") return 0;

    // Caso contrário, o código continua.
    // Lendo o primeiro número (pode ser o raio ou a base).
    cin >> n1;

    // Caso a forma seja um circulo não é necessário ler mais valores, portanto
    // calcula-se a área e exibe-se a resposta.
    if (forma == "circulo") {
      cout << "area = " << fixed << setprecision(2) << calcularAreaCirculo(n1)
           << endl;
    } else {
      // Caso a forma seja um triângulo ou um retângulo, lê-se outro valor
      // (altura), calcula-se a área e exibe-se o resultado.
      cin >> n2;
      if (forma == "triangulo") {
        cout << "area = " << fixed << setprecision(2)
             << calcularAreaTriangulo(n1, n2) << endl;
      } else if (forma == "retangulo") {
        cout << "area = " << fixed << setprecision(2)
             << calcularAreaRetangulo(n1, n2) << endl;
      }
    }
  }

  return 0;
}
