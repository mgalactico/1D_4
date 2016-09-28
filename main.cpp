//
#include "../std_lib_facilities.h"

int main() {
    double min, max, val1, val2;
    string unit1, unit2;
    cout << "Please enter value, and specify if in meters (m), centimeters (cm), feet(f), or inches (in): ";
    cin >> val1 >> unit1;

    //Change input to cms or leave as is if cms entered
    if (unit1 == "m")
        val2 = val1 * 100;
    else if (unit1 == "in")
        val2 = val1 * 2.54;
    else if (unit1 == "f")
        val2 = val1 * 12 * 2.54;
    else
        val2 = val1;

    min = max = val2;
    while (cin) {
        cout << "Please enter value, and specify if in meters (m), centimeters (cm), feet(f), or inches (in): ";
        cin >> val1 >> unit2;

        //Change input to cms or leave as is if cms entered
        if (unit2 == "m")
            val2 = val1 * 100;
        else if (unit2 == "in")
            val2 = val1 * 2.54;
        else if (unit2 == "f")
            val2 = val1 * 12 * 2.54;
        else
            val2 = val1;

        //Update min and max values
        if (val2 < min) {
            min = val2;
            cout << min << " cms, " << val1 << unit2 <<  " is the smallest number so far." << endl;
        } else  if (val2 > max) {
            max = val2;
            cout << max << " cms, " << val1 << unit2 <<  " is the largest number so far." << endl;
        }
    }
    return 0;
}