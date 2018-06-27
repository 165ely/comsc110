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
                cout << "Entered character " << c << endl;
                break;
            default:
                cout << c << " is not a valid choice.\n";
            
        }
    }
}