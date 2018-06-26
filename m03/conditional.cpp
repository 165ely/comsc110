#include <iostream>
using namespace std;

int main() {
    int x, y=1, z=2;
    // if(y<z)
    //     x=y;
    // else
    //     x=z;

    // y<z
    // ?   x=y
    // :   x=z;
    
    y<z?x=y:x=z;
    
    cout << x << endl;
    
    int w = 3;
    // if(y<z)
    //     x=y;
    // else if(w<y)
    //     x=z;
    // else 
    //     x=w;
        
    y<z
    ?   x=y
    :   (w<y
        ?   x=z
        :   x=w);
        
    cout << x;
    
}