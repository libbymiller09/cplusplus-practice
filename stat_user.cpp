#include <iostream>
using namespace std;

int populate_list(int list_filler[], int l_size) {
    
    char user_response;
    bool flag = true;
    int counter = 0;
    
    while (flag) {
        cout<<"Enter number: ";
        cin>>list_filler[counter];
        counter++;
        
        cout<<"Do you want to continue Y or N: ";
        cin>>user_response;
        
        if (user_response == 'N' || counter >= l_size) {
            flag = false;
            cout<<"Data Entry Limit Reached. Exiting!"<<endl;
        }
    }
    return counter;
}

int main() {
    
    const int list_size = 3;
    int build_list[list_size];
    
    int counter = populate_list(build_list, list_size);
    
    cout<<"The numbers you entered are: ";
    for (int i=0; i<counter; i++) {
        cout<<build_list[i];
    }
    
    return 0;
}
