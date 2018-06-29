// This program lets the user enter a filename.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    string filename, line;
    
    cout << "Enter the filename: ";
    cin >> filename;
    
    inputFile.open(filename);
    if (inputFile) { // If open successfully, process it.
        while (inputFile >> line) 
        // while (getline(inputFile, line))
            cout << line << endl;
        inputFile.close();
    }
    else cout << "Error opening the file.\n";
    return 0;
} 