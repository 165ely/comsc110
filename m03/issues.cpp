#include<iostream>
using namespace std;

int main() {
// if (a is less than 10) assign 0 to z 
// else assign 7 to z. 
int a;
cout << "enter a number " ;
cin >> a;
// int z = (a < 10) : 0 ? 7; 

// int z = (a < 10) ? 0 : 7;
// cout << z;

cout << ((a < 10) ? "0" : "7");
}