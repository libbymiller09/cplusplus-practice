#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void populate_arr(int usr_arr[], int sz) {
    for (int i=0; i<sz; i++) {
        cout<<"Please enter a number: ";
        cin>>usr_arr[i];
    }
}

bool number_ordering(int usr_arr[], int sz) {
    for (int i=0; i<sz; i++) {
        if (usr_arr[i] < usr_arr[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    
    const int arr_size = 5;
    int usr_arr[arr_size];
    
    populate_arr(usr_arr, arr_size);
    bool decr_order = number_ordering(usr_arr, arr_size);
    
    if (decr_order == true) {
        cout<<"The values are in decreasing order";
    }
    else {
        cout<<"The values are NOT in decreasing order";
    }
    
    return 0;
}
