#include <iostream>
using namespace std;

int main() {
    double magic = 12.369;
    if((magic/3.0) > 4.123 ) 
        cout << "yes!";
    else 
        cout << "no!";
    
    double d=0;
    while(d!=1.0) {
        cout << d << " ";
        d += 0.25;
    }
}