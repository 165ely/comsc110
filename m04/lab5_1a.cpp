// This program demonstrates the ++ and -- operators.
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    stringstream ss;
    int num = 4; // num starts out with 4.
    
    // Display the value in num.
    ss << "The variable num is " << num << endl;
    ss << "I will now increment num.\n\n";
    
    // Use postfix ++ to increment num.
    num++;
    ss << "Now the variable num is " << num << endl;
    ss << "I will increment num again.\n\n";
    
    // Use prefix ++ to increment num.
    ++num;
    ss << "Now the variable num is " << num << endl;
    ss << "I will now decrement num.\n\n";
    
    // Use postfix -- to decrement num.
    num--;
    ss << "Now the variable num is " << num << endl;
    ss << "I will decrement num again.\n\n";
    
    // Use prefix -- to increment num.
    --num;
    ss << "Now the variable num is " << num << endl;
    
    ss << num++ << " " << num++ << " "
         << num-- << " " << num-- << " " << num << endl;
         
    cout << ss.str();
    return 0;
} 