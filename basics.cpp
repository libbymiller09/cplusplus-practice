#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void populate_array(int arr [], int size) {
    for (int i=0; i<size; i++) {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
}

void print_array(int arr [], int size) {
    cout<<"The numbers in the array are: "<<endl;
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

void search_array(int arr [], int size) {
    int tgt_num = 0;
    int counter = 0;
    bool flag = false;
    
    cout<<"Enter target number: ";
    cin>>tgt_num;
    
    while (counter < size && flag == false) {
        if (arr[counter] == tgt_num) {
            cout<<"Number "<<tgt_num<<" Found!"<<endl;
            cout<<setw(15)<<setfill('*')<<""<<endl;
            flag = true;
        }
        counter++;
    }
    if (flag == false) {
        cout<<"Target Number: "<<tgt_num<<" NOT Found"<<endl;
    }
}

void find_largest_number(int arr [], int size) {
    int max = arr[0];
    
    for (int i=1; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout<<"The largest element in the array is: "<<max<<endl;
}

void find_largest_smallest_number(int arr [], int size, int &max, int &min) {
    max = arr[0];
    min = arr[0];
    
    for (int i=1; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i] < min) {
            min = arr[i];
        }
    }
}

int main() {
    
    const int arr_size = 5;
    int num_array[arr_size];
    
    int max, min;
    
    populate_array(num_array, arr_size);
    print_array(num_array, arr_size);
    cout<<endl;
    
    search_array(num_array, arr_size);
    find_largest_number(num_array, arr_size);
    
    find_largest_smallest_number(num_array, arr_size, max, min);
    
    cout<<setw(15)<<setfill('*')<<""<<endl;
    cout<<"The largest number in the array = "<<max<<endl;
    cout<<"The smallest number in the array = "<<min<<endl;
    cout<<setw(15)<<setfill('*')<<""<<endl;
    
    return 0;
}
