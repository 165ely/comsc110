#include <iostream>
using namespace std;


int main() {
    // A) 
    int x = 2;
    int y = x++;
    cout << "\npart-A \n" << x << y;
    
    // B) 
    x = 2;
    y = ++x;
    cout << "\npart-B \n" << x << y;
    
    // C) 
    x = 2;
    y = 4;
    cout << "\npart-C \n" << x++ << --y;
    
    // D) 
    x = 2;
    y = 2 * x++;
    cout << "\npart-D \n" << x << y;
    
    // E) 
    cout << "\npart-E \n";
    x = 99;
    if (x++ < 100)
     cout << "It is true!\n";
     else
     cout << "It is false!\n";
    
    // F) 
    cout << "\npart-F \n";
    x = 0;
    if (++x)
     cout << "It is true!\n";
    else
     cout << "It is false!\n"; 
}