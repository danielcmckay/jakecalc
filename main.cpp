#include <iostream>
using namespace std;
double calc(double n1, double n2, char oper);
int prompt();

int main() 
{
    bool exitedProgram = false;
    double num1;
    char operand;
    double num2;
    string output;

    while (!exitedProgram)
    {

    if (prompt() == 1) 
    {
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter an operand: ";
    cin >> operand;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "Your output is: " << calc(num1, num2, operand) << "\n";
    } else 
    {
      exitedProgram = true;
      return 0;
    }
    }
}

int prompt() 
{
    int response;
    cout << "Welcome to the calculator. To use the calculator, type 1 and hit enter. To exit, type 0.\n";
    cin >> response;
    if (response == 0) 
    {
        cout << "Exiting program. Goodbye!\n";
        return 0;
    }
    else if (response == 1) {
        cout << "Starting calculator...\n";
        return 1;
    } else 
    {
        cout << "Ooop, please enter 1 or 0\n";
        prompt();
    }
    return 0;
}

double calc(double n1, double n2, char oper)
{
    switch(oper) {
        case ('+'): return n1+n2;
            break;
        case ('-'): return n1-n2;
            break;
        case ('*'): return n1*n2;
            break;
        case ('/'): return n1/n2;
            break;
        default: cout << "Please pick a valid operator.\n";
                    return 0;
    }
}