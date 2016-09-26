//Read two ints and stop when | is entered. Use While loop
#include "../std_lib_facilities.h"

int main() {
    int i, j;
    while (cin >> i >> j) {
        if (i < j)
            cout << "The smaller number is " << i << " and the larger value is " << j << endl;
        else
            cout << "The smaller number is " << j << " and the larger value is " << i << endl;
    }
    return 0;
}