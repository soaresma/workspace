/**
 start
    input myNumber: numeric
    myAnswer = myNumber * 2
    output myAnswer
  end

 */

#include <iostream>

int main() {
    double myNumber;
    double myAnswer;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> myNumber;

    // Calculation
    myAnswer = myNumber * 2;

    // Output
    std::cout << "The answer is: " << myAnswer << std::endl;

    return 0;
}