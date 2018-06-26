#include <iostream>
using namespace std;
int main()
{
    char year;
    float gpa;
    cout << "What year student are you ?\n"
         << " 1 (freshman),\n"
         << " 2 (sophomore),\n"
         << " 3 (junior), or\n"
         << " 4 (senior)\n"
         << "    ==> ";
    cin >> year;
    
    cout << "Now enter your GPA: ";
    cin >> gpa;
    
    // if (gpa >= 2.0 && year == '4')
    // if( 2.0 <= gpa && year == '4')
    // if( !(gpa < 2.0) && year == '4' )
    if( !(gpa < 2.0) && year == '4' )
        cout << "It is time to graduate soon" << endl;
    // else if ( gpa <2.0 || year != '4' )
    else if ( gpa <2.0 || year <= 3 )
        cout << "You need more schooling" << endl;
    else
        cout << "gpa <2.0 || year <= " << int(year);
    return 0;
}
