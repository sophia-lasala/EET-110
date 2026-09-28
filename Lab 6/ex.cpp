#include <iostream>
using namespace std;

int a[10];
int maximum = 0, input = 1;

int main() 
{
    while (input == 1){
    for (int i=0; i <= 9; i++){
        a[i]= rand()%100+1;
    }
    for(int i=0; i <= 9; i++){
        if (a[i] > maximum){
            maximum = a[i];
        }
    }

    cout << "The maximum value of these 10 random numbers is: " << maximum;
    cout << "\n Would you like to restart? TYPE 1 - YES, 0 - NO ";
    cin >> input;
    }
}
