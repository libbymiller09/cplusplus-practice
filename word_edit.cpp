#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void letter_check(string str) {
    for (int i=0; i<str.length(); i++) {
        if (str[i] == 'l' || str[i] == 't' || str[i] == 'o') {
            str.erase(i,1);
            i--;
        }
    }
    
    cout<<"The updated string is: "<<str<<endl;
}

int main() {
    
    string user_str;
    
    cout<<"Enter a string: ";
    cin>>user_str;
    
    cout<<"You entered the string: "<<user_str<<endl;
    
    letter_check(user_str);
    
    return 0;
}
