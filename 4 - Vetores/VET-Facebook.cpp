/**
 * @file: VET-Facebook.cpp
 * @author: Rodrigo Andrade
 * @date: 1 Apr 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iostream>

using namespace std;

int main() {
  // Reading the number of users in Facebook
  int facebook_users = 0;
  cin >> facebook_users;

  // Creating the facebook network to compute the number of contacts for each
  // user
  int facebook_network[1000];

  // Reading the number of contacts for each user
  int contacts = 0;
  for (int i = 0; i < facebook_users; i++) {
    cin >> contacts;

    // Storing the number of contacts for each user in the facebook network
    facebook_network[i] = contacts;
  }

  // Defining the most and least connected users
  int min, max = facebook_network[0];

  // Getting the most and least connected users from facebook_network
  for (int x = 0; x < facebook_users; x++) {
    if (facebook_network[x] > max) {
      max = facebook_network[x];
    } else if (facebook_network[x] < min) {
      min = facebook_network[x];
    }
  }

  // Printing the number of contacts of the most and least connected users
  cout << "Menor numero de contatos: " << min << endl;
  cout << "Maior numero de contatos: " << max << endl;

  return 0;
}
