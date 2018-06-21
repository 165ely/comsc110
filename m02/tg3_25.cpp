// This program demonstrates random numbers.
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime> // For the time function
using namespace std;

int main()
{
    // Get the system time.
    unsigned seed = time(0);
    cout << "time(0) is " << seed << endl;
    // unsigned seed = 2;
    // Seed the random number generator.
    srand(seed);
    
    // Display three random numbers.
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    // cout << rand()%2 << endl;
    // cout << rand()%2 << endl;
    // cout << rand()%2 << endl;
    return 0;
} 