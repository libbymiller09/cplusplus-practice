#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum cities {Portland, Seattle, New_York, Denver};

void print_city_opinion(cities entr) {
    switch (entr) {
        case 0:
            cout<<"Portland is my home city";
            break;
        case 1:
            cout<<"It rains a lot in Seattle";
            break;
        case 2:
            cout<<"New York is crowded";
            break;
        case 3:
            cout<<"Denver is beautiful";
            break;
        default:
            cout<<"Other cities are great too but you didn't choose from the list!";
    }
}

int main() {
    
    cities pdx = Portland;
    cities seat = Seattle;
    cities ny = New_York;
    cities den = Denver;
    
    cout<<"What is your favorite city?"<<endl;
    
    print_city_opinion(den);
    
    return 0;
}
