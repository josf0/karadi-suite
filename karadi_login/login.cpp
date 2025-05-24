// Login Screen for Karadi-Suite
// Created by: Joseph Johnson

#include <iostream>
using namespace std;
#include <string>
#include <fstream>

void register_user() {

    string user_name;
    string user_password;

    cout << "\nRegistering User\n";
    ofstream UserDatabase("UserDatabase.txt");

    cout << "\nEnter your username: ";
    cin >> user_name;
    UserDatabase << user_name << "\n";

    cout << "\nEnter your password: ";
    cin >> user_password;
    UserDatabase << user_password << "\n";

    cout << "\nUser has been regsitered.\n";

    UserDatabase.close();

}

void login_user() {

    string user_name;
    string user_password;
    string db_name;
    string db_password;
    int count;

    // Reading from UserDatabase file
    ifstream UserDatabase("UserDatabase.txt");

    getline(UserDatabase, db_name);
    getline(UserDatabase, db_password);

    UserDatabase.close();

    cout << "\nWelcome to login screen\n";
    cout << "\nEnter your username: ";
    for(int i = 1; i < 4; i++) {
        cin >> user_name;
        if(user_name == db_name) {
            cout << "\nCorrect username entered";
            count++;
            break;
        }
        else {
            cout << "\nThe entered username doesn't exist";
            cout << "\nTries left = " << i << "\nTry again: ";
        }
    }
    cout << "\nEnter your password: ";
    for(int i = 1; i < 4; i++) {
        cin >> user_password;
        if(user_password == db_password) {
            cout << "\nCorrect password entered";
            count++;
            break;
        }
        else {
            cout << "\nThe entered password doesn't exist";
            cout << "\nTries left = " << i << "\nTry again: ";
        }
    }

    if(count == 2) {
        cout << "\n\n###################\nWelcome to Karadi-Suite\n###################\n";
    }

}

int main() {

    int user_start;
    int user_regORlog;
    string user_in;

    cout << "\nWelcome to the Karadi-Suite\nWould you like to start or quit the app?\n1: Start\n2: Quit\nEnter your option: ";
    cin >> user_start;

    if(user_start == 1) {
        cout << "\n\nWould you like to register or login?\n1: Register\n2: Login\nEnter your option: ";
        cin >> user_regORlog;

        if(user_regORlog == 1) {
            register_user();
            cout << "\nWould you like to login?\nyes/no?: ";
            cin >> user_in;
            if(user_in == "yes" || user_in == "Yes") {
                login_user();
            }
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
