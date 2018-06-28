#include<iostream>
using namespace std;

int main() {
    int i=1;
    float f=2.2;
    char c='a';
    string s="this";
    
    cout << s+c << endl
         << i+c << endl
         << i+f << endl;
}