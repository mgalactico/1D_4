//Read two ints and stop when | is entered. Use While loop
#include "../std_lib_facilities.h"

int main() {
    double i, j;
    while (cin >> i >> j) {
        if (i < j)
            cout << "The smaller number is " << i << " and the larger value is " << j << endl;
        else if (j < i)
            cout << "The smaller number is " << j << " and the larger value is " << i << endl;
        else
            cout << "The numbers are equal!" << endl;
    }
    return 0;
}