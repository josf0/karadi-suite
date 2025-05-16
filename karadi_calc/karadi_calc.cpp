#include <iostream>
using namespace std;

// Adder
int add(int a, int b) {
    return a + b;
}

// Subtractor
int sub(int a, int b) {
    return a - b;
}
// Multiplier
int mult(int a, int b) {
    return a * b;
}
// Division
float divide(float a, float b) {
    return a / b;
}

// Mode display
void disp_mode(int mode) {
    if(mode == 1) {
        cout << "\n##### Addition chosen #####\n";
    }
    else if(mode == 2) {
        cout << "\n##### Subtraction chosen #####\n";
    }
    else if(mode == 3) {
        cout << "\n##### Multiplication chosen #####\n";
    }
    else if(mode == 4) {
        cout << "\n##### Division chosen #####\n";
    }
}

int main() {

    // Initialiing the numbers to be calculated
    float num1 = 0, num2 = 0;
    int mode = 0, valid_mode = 4;

    // Welcome Message
    cout << "------------------------\nWelcome to Karadi-Calc\n------------------------\n";
    cout << "Select mode:\n[1] Addition\n[2] Subraction\n[3] Multiplication\n[4] Division\n";
    cin >> mode;

    if(mode != 0 && mode <= valid_mode) {
        disp_mode(mode);
        cout << "Enter the first number\n";
        cin >> num1;
        cout << "Enter the second number\n";
        cin >> num2;

        if(mode == 1) {
            cout << "\nThe result is " << add(num1, num2);
        }
        else if(mode == 2) {
            cout << "\nThe result is " << sub(num1, num2);
        }
        else if(mode == 3) {
            cout << "\nThe result is " << mult(num1, num2);
        }
        else if(mode == 4) {
            cout << "\nThe result is " << divide(num1, num2);
        }
    }
    else
        cout << "Please enter a valid mode. The calculator has stopped";

    cout << "\n";

    return 0;
}

// Random stuff
// Fun little way to traverse an array
void print() {
    int v[] = {0,1,2,3,4,5,6};
    
    for(auto x : v)
        cout << x << " ";
    
    for(auto x : {10,20,30,40,50,60})
        cout << x << " ";
}
