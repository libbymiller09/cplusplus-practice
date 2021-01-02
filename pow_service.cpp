#include <iostream>
using namespace std;

int pow_fun(int x, int y) {
    if (y == 0) {
        return 1;
    }
    else if (y == 1) {
        return x;
    }
    else {
        return x * pow_fun(x, y-1);
    }
}
