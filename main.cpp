//Read two ints and stop when | is entered. Use While loop
#include "../std_lib_facilities.h"

int main() {
    double min, max, temp;
    cout << "Please enter value: ";
    cin >> temp;
    min = max = temp;
    while (cin) {
        cout << "Please enter value: ";
        cin >> temp;
        if (temp < min) {
            min = temp;
            cout << min << " is the smallest number so far." << endl;
        } else  if (temp > max) {
            max = temp;
            cout << max << " is the largest number so far." << endl;
        }
    }
    return 0;
}