#include <iostream>
using namespace std;

int main() {
    char c;
    int i;
    
    
    while(true) {
        cout << "Enter a choice: ";
        cin >> c; //cin.ignore();
        
        switch(c) {
            case 'a': case 'b': case 'c':
            { // explicit block
                cout << "Entered character " << c << endl;
                break; // continue;
            }
            default:
                cout << c << " is not a valid choice.\n";
            
        }
    }
}