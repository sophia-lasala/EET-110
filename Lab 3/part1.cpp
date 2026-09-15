#include <iostream>
using namespace std;
const double PI = 3.141592653589793238463;

float reactance, capacitor;
long frequency; 

int main(){
    cout << "Type in a frequency in hertz: ";
    cin >> frequency;

    cout << "\nType in capacitor in farads: ";
    cin >> capacitor;

    reactance = 1/(2*PI*frequency*capacitor);

    cout << "\nThe frequency (f) is: " << frequency << " Hz";
    cout << "\nThe capacitive (F) is: " << capacitor << " F";
    cout << "\nThe capacitive reactance (Xc) is: " << reactance << " ohms";

    return 0;
}
