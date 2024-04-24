#include <iostream>

using namespace std;

void displayMenu();
void performOperation(int choice, int a, int b);

int main() {
    char cont;

    do {
        int choice, a, b;


        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;


        cout << "Enter first integer: ";
        cin >> a;
        cout << "Enter second integer: ";
        cin >> b;


        performOperation(choice, a, b);


        cout << "Do you want to procced? (y/Y for yes): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    return 0;}
void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
}


void performOperation(int choice, int a, int b) {
    switch (choice) {
        case 1:
            cout << "Result: " << a << " + " << b << " = " << a+ b<< endl;
            break;
        case 2:
            cout << "Result: " << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << "Result: " << a << " * " << b<< " = " << a *b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result: " << a << " / " << b<< " = " << static_cast<double>(a) / b << endl;
            else
                cout << "The second integer is zero, divide by zero\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
}
