//Read two ints and stop when | is entered. Use While loop
#include "../std_lib_facilities.h"

int main() {
    int i, j;
    while (cin >> i >> j) {
        cout << i << '\t' << j << endl;
    }
    return 0;
}