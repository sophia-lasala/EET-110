#include <iostream>
using namespace std;

int start, end;
int test = 1;
bool odd = false; 
int input = 0; 

int main() 
{
    while (test == 1){
    cout << "What is the starting integer? ";
    cin >> start; 

    cout << "What is the ending integer? ";
    cin >> end; 

    if (start >= end){
        cout << "Starting integer can not be greater than or equal to ending integer.";
    }
    else{
        test = 0;
    }
    }

    cout 

    for (int i = start; i < end; i++)
    return 0;
}
