#include <iostream>

int main() {
    // Declare variables A and B for user input.
    double A, B;
    std::cin >> A >> B;

    // Calculate the sum of A and B, and store the result in constant X.
    const double X = A + B;

    // Output the sum stored in variable X to the console.
    std::cout << "X = " << X;
    return 0;
}
