#include <iostream>
#include <string>

using namespace std;

// Function prototypes
int ADD(int num1, int num2);
int SUBTRACT(int num1, int num2);
int MULTIPLY(int num1, int num2);
int DIVIDE(int num1, int num2);

int main() {
    int num1;
    int num2;
    string answer;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers: " << endl;
    cin >> num1;
    cin >> num2;

    // Prompt the user to choose an operation
    cout << "Do you want to add, subtract, multiply, or divide: ";
    cin >> answer;

    // Perform the four operations and store the results in variables
    int addition = ADD(num1, num2);
    int subtract = SUBTRACT(num1, num2);
    int multiply = MULTIPLY(num1, num2);
    int divide = DIVIDE(num1, num2);

    // Check the user's answer and display the corresponding result
    if (answer.compare("add") == 0) {
        cout << addition;
    }
    else if (answer.compare("subtract") == 0) {
        cout << subtract;
    }
    else if (answer.compare("multiply") == 0) {
        cout << multiply;
    }
    else if (answer.compare("divide") == 0) {
        cout << divide;
    }
    else {
        cout << "Input is not valid";
    }

    return 0;
}

// Function to perform addition
int ADD(int firstNum, int secondNum) {
    return firstNum + secondNum;
}

// Function to perform subtraction
int SUBTRACT(int firstNum, int secondNum) {
    return firstNum - secondNum;
}

// Function to perform multiplication
int MULTIPLY(int firstNum, int secondNum) {
    return firstNum * secondNum;
}

// Function to perform division
int DIVIDE(int firstNum, int secondNum) {
    return firstNum / secondNum;
}
