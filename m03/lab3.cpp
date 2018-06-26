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
    
    if (gpa >= 2.0 && year == '4')
    cout << "It is time to graduate soon" << endl;
    else if (year != '4'|| gpa <2.0)
    cout << "You need more schooling" << endl;
    return 0;
}
