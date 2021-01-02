#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum states {Oregononian, Washingtonian, Iowan};

void print_state_identity(states st) {
    switch(state){
        case 0:
            cout<<"Your an oregonian";
            break;
        case 1:
            cout<<"Your from washington";
            break;
        case 2:
            cout<<"Your from Iowa";
            break;
        default:
            cout<<"state not found";
    }
}

int main() {
    
    states iowa = Iowan;
    states oregon = Oregononian;

    cout<<"State = "<<iowa<<endl;
    
    print_state_identity(oregon);
    
    return 0;
}
