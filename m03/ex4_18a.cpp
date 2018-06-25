// This program displays a menu and asks the user to make a
// selection. An if/else if statement determines which item
// the user has chosen.
#include <iostream>
#include <iomanip>
using namespace std;

void menu() {
        
    // Display the menu and get a choice.
    cout << "\t\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the Program\n"
         << "5. Menu\n\n";

}

int main()
{
    int choice; // To hold a menu choice
    int months; // To hold the number of months
    double charges; // To hold the monthly charges
    
    // Constants for membership rates
    const double ADULT = 40.0,
    SENIOR = 30.0,
    CHILD = 20.0;
    
    // Constants for menu choices
    const int ADULT_CHOICE = 1,
    CHILD_CHOICE = 2,
    SENIOR_CHOICE = 3,
    QUIT_CHOICE = 4,
    MENU_CHOICE = 5;
        // Set the numeric output formatting
        
    cout << fixed << showpoint << setprecision(2);
    bool loop=true;
    menu();
    while(loop) {
        cout << "Enter your choice: ";
        cin >> choice;
        // Respond to the user's menu selection.
        switch(choice) {
        // if (choice == ADULT_CHOICE)
        // if (choice == 1)
            case ADULT_CHOICE:
            {
                cout << "For how many months? ";
                cin >> months;
                charges = months * ADULT;
                cout << "The total charges are $" << charges << endl;
                break;
            }
            // else if (choice == CHILD_CHOICE)
            case CHILD_CHOICE:
            {
                cout << "For how many months? "; 
                cin >> months;
                charges = months * CHILD;
                cout << "The total charges are $" << charges << endl;
                break;

            }
            // else if (choice == SENIOR_CHOICE)
            case SENIOR_CHOICE:
            {
                cout << "For how many months? ";
                cin >> months;
                charges = months * SENIOR;
                cout << "The total charges are $" << charges << endl;
                break;
            }
            case MENU_CHOICE:
            {
                menu();
                break;
            }
            case QUIT_CHOICE:
            // else if (choice == QUIT_CHOICE)
            {
                cout << "Program ending.\n";
                loop = false;
                break;
            }
            default:
            // else
            {
                cout << "The valid choices are 1 through 4. \n";
                break;
            }
        } // end of switch
    } // end of while
    return 0;
} 