#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;
int main()
{
    float batAvg;
    batAvg = float(HITS) / AT_BAT; // an assignment statement
    cout << "The batting average is " << batAvg << endl; // output the result
    return 0;
}
