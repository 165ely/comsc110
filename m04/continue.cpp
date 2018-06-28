#include<iostream>
using namespace std;

int main() {
    int a=2, b=3, c=4, d;
    
    {   cout << "enter\n";
        d = a+b;
        if(d>4) continue;
        d = d+c;
    }
    cout << d;
    
}