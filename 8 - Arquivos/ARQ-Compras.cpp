/**
 * @file: ARQ-Compras.cpp
 * @author: Rodrigo Andrade
 * @date: 9 Jun 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief: Struct for storing the products
 */
struct dados {
  string produto;
  float preco;
};

/**
 * @return: 0 if the program runs successfully
 */
int main() {
  // Getting the file name
  string file_name;
  cin >> file_name;

  // Creating an array for storing the products
  dados products[100];

  // Reading the file
  ifstream file_read(file_name);

  // Getting the products from the file and storing them in the products array
  string product_name;
  float product_price;
  int product_index = 0;

  while (getline(file_read >> ws, product_name) && file_read >> product_price) {
    products[product_index].produto = product_name;
    products[product_index].preco = product_price;
    product_index++;

    // Since we are using file_read >> ws, we do not need to use:
    // file_read.ignore();
  }

  // Closing the file
  file_read.close();

  // Getting the bought product and amount
  string bought_product_name;
  float bought_product_amount;

  getline(cin >> ws, bought_product_name);
  cin >> bought_product_amount;

  // Searching for the bought product in the products array and calculating the
  // total price
  for (int i = 0; i < product_index; i++) {
    if (products[i].produto == bought_product_name) {
      cout << "R$ " << fixed << setprecision(2)
           << products[i].preco * bought_product_amount << endl;
      break;
    }
  }

  return 0;
}
