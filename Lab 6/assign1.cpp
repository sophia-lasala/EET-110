#include <iostream>
using namespace std;

int main() 
{
    int R1 = 100;
    int R2 = 220;
    int Vin = 12;
    int* pR = &R1;
    int* pV = &Vin;

    cout << "\n\n Line 1:";
    *pR = 150;

    cout << "\nR1: " << R1; 
    cout << "\nR2: " << R2; 
    cout << "\nVin: " << Vin; 
    cout << "\npR: " << pR;
    cout << "\npV: " << pV; 


    cout << "\n\n Line 2:";
    pR = &R2;
    cout << "\nR1: " << R1; 
    cout << "\nR2: " << R2; 
    cout << "\nVin: " << Vin; 
    cout << "\npR: " << pR;
    cout << "\npV: " << pV; 


    cout << "\n\n Line 3:";
    *pR = *pR + 30;

    cout << "\nR1: " << R1; 
    cout << "\nR2: " << R2; 
    cout << "\nVin: " << Vin; 
    cout << "\npR: " << pR;
    cout << "\npV: " << pV; 

    cout << "\n\n Line 4:";
    R1 = 150 + *pR;

    cout << "\nR1: " << R1; 
    cout << "\nR2: " << R2; 
    cout << "\nVin: " << Vin; 
    cout << "\npR: " << pR;
    cout << "\npV: " << pV; 

    cout << "\n\n Line 5:";
    *pV = *pV * 2;

    cout << "\nR1: " << R1; 
    cout << "\nR2: " << R2; 
    cout << "\nVin: " << Vin; 
    cout << "\npR: " << pR;
    cout << "\npV: " << pV; 

    return 0;
}
