#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// declaring our own data type

//enum sports {Football, Tennis, Golf, Basketball};
//
//void print_sports(sports s) {
//    switch(s) {
//        case 0:
//            cout<<"Football is a great sport";
//            break;
//        case 1:
//            cout<<"Tennis is overated";
//            break;
//        case 2:
//            cout<<"Golf is fun";
//            break;
//        case 3:
//            cout<<"Basketball is the best";
//            break;
//        default:
//            cout<<"Sports does not exist";
//    }
//}
//
//int main() {
//
//    sports top_sports = Football;
//    print_sports(top_sports);
//    return 0;
//}


// Print array in reverse
//
//void reverse(int arr[], int arr_sz) {
//    if (arr_sz == 0) {
//        cout<<arr[arr_sz]<<" ";
//    }
//    else {
//        cout<<arr[arr_sz]<<" ";
//        reverse(arr, arr_sz-1);
//    }
//}
//
//int main() {
//    const int arr_sz = 4;
//    int int_val[arr_sz];
//
//    for (int i=0; i<arr_sz; i++) {
//        cout<<"Enter value: ";
//        cin>>int_val[i];
//    }
//
//    cout<<"original values = ";
//
//    for (int i=0; i<arr_sz; i++) {
//        cout<<int_val[i]<<" ";
//    }
//
//    cout<<endl;
//
//    cout<<"reverse values = ";
//    reverse(int_val, arr_sz-1);
//}

// Tells whether the entered numbers are in ascending order

//bool int_order(int arr[], int sz) {
//    for (int i=0; i<sz-1; i++) {
//        if (arr[i] > arr[i+1]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//
//    const int arr_size = 3;
//    int int_arr[arr_size];
//
//    for (int i=0; i<arr_size; i++) {
//        cout<<"Enter number: ";
//        cin>>int_arr[i];
//    }
//
//    cout<<"Array values = ";
//    for (int i=0; i<arr_size; i++) {
//        cout<<int_arr[i]<<" ";
//    }
//
//    bool incr_order = int_order(int_arr, arr_size);
//
//    if (incr_order == true) {
//        cout<<"Values are in increasing order";
//    }
//    else {
//        cout<<"Values are NOT in increasing order";
//    }
//
//    return 0;
//}

// pow(x,y) = 1 y=o
//          = x y=1
//          = x * pow(x,y-1)  y>1

int pow_fun(int x, int y) {
    
    if (y==0) {
        return 1;
    }
    else if (y == 1) {
        return x;
    }
    else {
        return x * pow_fun(x, y-1);
    }
}

int main() {
    
    int x,y;
    
    cout<<"First number: ";
    cin>>x;
    
    cout<<"Second number: ";
    cin>>y;
    
    int answer = pow_fun(x,y);
    cout<<"Answer = "<<answer<<endl;
    
    return 0;
}
