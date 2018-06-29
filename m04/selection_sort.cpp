#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr = {5,6,2,9,4,1,7};
    for(auto item:arr) cout << item << " ";
    cout << endl;
    
    // outer loop: control the sorted/unsorted region
    for(int i=0; i<arr.size(); i++) {
        // inner loop: find and move the smallest in unsorted
        int temp, smallest = i;
        for(int j=i; j<arr.size(); j++) {
            if(arr[smallest] > arr[j]) 
                smallest = j;
        }
        // swap
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        for(auto item:arr) cout << item << " ";
        cout << endl;
    }
    for(auto item:arr) cout << item << " ";
}