// Login Screen for Karadi-Suite
// Created by: Joseph Johnson

#include <iostream>
using namespace std;
#include <string>
#include <fstream>

class user {
    public:
        string username;
        string password;
}

void register_user() {
    cout << "\nRegistering User\n";
}

void login_user() {
    cout << "\nLogging in User\n";
}

int main() {

    int user_start;
    int user_regORlog;

    cout << "\nWelcome to the Karadi-Suite\nWould you like to login or quit the app?\n1: Login\n2: Quit\nEnter your option: ";
    cin >> user_start;

    if(user_start == 1) {
        cout << "\n\nWould you like to register or login?\n1: Register\n2: Login\nEnter your option: ";
        cin >> user_regORlog;

        if(user_regORlog == 1) {
            register_user();
        }
        else if(user_regORlog == 2) {
            login_user();
        }
    }
    else if(user_start == 2) {
        cout << "\nThanks for using the App, see you soon!";
    }
    else {
        cout << "\nPlease enter a valid option";
    }
    

    return 0;
}
