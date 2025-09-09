#include <iostream>
using namespace std;

int main() {
    double ArcLength;
    double CircumferenceLength;
    double AngleWidth;

    //Control on the circumference length
    do {
        cout << "\n";
        cout << "Enter the length of the circumference: " << endl;
        cin >> CircumferenceLength;
        if (CircumferenceLength <= 0) {
            cout << "Error: The circumference length must be greater than zero. Please try again." << endl;
        }
    } while (CircumferenceLength <= 0);

    //Control on the arc length
    do {
        cout << "Enter the arc length: " << endl;
        cin >> ArcLength;
        if (ArcLength <= 0 || ArcLength > CircumferenceLength) {
            cout << "Error: The arc length must be greater than zero and less than or equal to the circumference. Please try again." << endl;
        }
    } while (ArcLength <= 0 || ArcLength > CircumferenceLength);

    //Calculating the central angle
    AngleWidth = ArcLength * 360 / CircumferenceLength;

    cout << "The central angle measures: " << AngleWidth << " degrees" << endl;
    cout << "Goodbye and thank you." << endl;

    return 0;
}