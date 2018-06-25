#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    while(1) {
        double gpa=0, coupon=0;
        cout << "enter the gpa: ";
        cin >> gpa;
        if(gpa>=4.0) coupon += 2;
        if(gpa>=3.0) coupon += 1;
        if(gpa>=2.0) coupon += 0.5;
        cout << fixed << setprecision(1)
             << gpa << " award with " << coupon << " coupon.\n";
    }
}