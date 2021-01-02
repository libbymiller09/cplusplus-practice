#include <iostream>
using namespace std;

int gcd_fun(int x, int y) {
    if (y == 0) {
        return x;
    }
    else {
        return gcd_fun(y, x % y);
    }
}
