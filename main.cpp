#include <iostream>
#include <limits>

using namespace std;

int main() {

    // declaring variables
    string mathOperation;
    int num1, num2;

    // user input
    cout << "enter first number: ";
    cin >> num1;

    cout << "enter math operation: ";
    cin >> mathOperation;

    cout << "enter second number: ";
    cin >> num2;


    // user input 2
    if (mathOperation == "x") {

        cout << num1 * num2 << endl;

    }
    else if (mathOperation == "+") {

        cout << num1 + num2 << endl;

    }
    else if (mathOperation == "/") {

        cout << num1 / num2 << endl;

    }
    else if (mathOperation == "-") {

        cout << num1 - num2 << endl;

    }
    else {

        cout << "please try again";

    }
    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), 'n'); // ignore any characters in the input buffer until we find an enter character
    std::cin.get();

    return 0;