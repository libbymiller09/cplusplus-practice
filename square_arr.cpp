#include <iostream>
using namespace std;

namespace array_square {
    #include <cmath>
    void print(int arr [], int sz) {
        for (int i=0; i<sz; i++) {
            cout<<arr[i]<<" ";
        }
    }
}

void square_arry(int arr [], int sz) {
    for (int i=0; i<sz; i++) {
        arr[i] = pow(arr[i], 2);
    }
    print(arr, sz);
}

int main() {
    
    using namespace array_square;
    
    int x [] = {1, 2, 3, 4, 5};
    square_arry(x,5);
    
    return 0;
}
