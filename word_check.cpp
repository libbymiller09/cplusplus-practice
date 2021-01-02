#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void alphabet_chk(string s) {
    for (int i=0; i<s.length(); i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            s.erase(i,1);
        }
    }
    cout<<"Updated string is: "<<s<<endl;
}

int main() {
    
    string str;
    
    cout<<"Enter string: ";
    cin>>str;
    
    cout<<"You entered: "<<str<<endl;
    
    alphabet_chk(str);
        
    return 0;
}
