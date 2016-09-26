//Read two ints and stop when | is entered. Use While loop
#include "../std_lib_facilities.h"

int main() {
    double i, j;
    while (cin >> i >> j) {
        if (i < j) {
            cout << "The smaller number is " << i << " and the larger value is " << j << endl;
            if ((j - i) < 0.01) //Without the { above, but only an indented if, this executes as a standalone if.
                cout << "The numbers are almost identical." << endl;}
        else if (j < i) {
            cout << "The smaller number is " << j << " and the larger value is " << i << endl;
            if ((i - j) < 0.01)
                cout << "The numbers are almost identical." << endl;}
        else
            cout << "The numbers are equal!" << endl;
    }
    return 0;
}