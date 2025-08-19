// Name: Advika Bhosle
// PRN: 24070123007
// Batch: EnTc A1

#include <iostream>
using namespace std;

class Calculator {
public:
    float num1, num2;

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0; 
        }
    }
};

int main() {
    Calculator calc;

    cout << "Enter first number: ";
    cin >> calc.num1;

    cout << "Enter second number: ";
    cin >> calc.num2;

    cout << "\nAddition: " << calc.add();
    cout << "\nSubtraction: " << calc.subtract();
    cout << "\nMultiplication: " << calc.multiply();
    cout << "\nDivision: " << calc.divide();
}

//Output
Enter first number: 2071
Enter second number: 1856

Addition: 3927
Subtraction: 215
Multiplication: 3.84378e+06
Division: 1.11584

=== Code Execution Successful ===
