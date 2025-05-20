// Number Guesser Game by Karadi
// Date: 21 May 2025
//
// The game generates a number and the user has to guess it
// by the game telling them if the entered number is higher or lower

#include <iostream>
using namespace std;
#include <string>


int main() {

    char user_start;
    int user_num;
    int rand_num;

    cout << "\n---------------\nWelcome to the\nNUMBER GUESSER\n---------------\n";
    cout << "\nType Y to user_start the game or Q to quit the game: ";
    
    cin >> user_start;

    if(user_start == 'Y' || user_start == 'y') {

        rand_num = rand() % 101;
        cout << "\nA random number has been generated between 0 and 100\n";
        cout << "\nGuess the number: ";

        for(int i=1; i<=10; i++) {
            cin >> user_num;
            if(user_num == rand_num) {
                cout << "\nYou have guessed it correct!!! The number was " << rand_num;
                break;
            }
            else if(user_num < rand_num) {
                cout << "\nYou have " << 10 - i << " more tries\n";
                cout << "\nGuess higher: ";
            }
            else if(user_num > rand_num) {
                cout << "\nYou have " << 10 - i << " more tries\n";
                cout << "\nGuess lower: ";
            }
        }
        cout << "\nSorry you didn't guess it correctly.\nBetter luck next time.";

    }
    
    cout << "\nThanks for coming by. See you again";
    cout << "\nClosing game\n";

    return 0;

}
