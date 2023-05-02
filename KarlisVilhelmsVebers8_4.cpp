// KarlisVilhelmsVebers8_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{    
    char str[20], letter;;  
    char* p;
    int arr[20];
    int j = 0, count = 0;;
    cout << "Input a letter ";
    cin >> letter;
    cout << "Input word ";
    cin >> str;  
    p = &str[0];
    cout << "letter was found at possitions: ";
    while (*p != '\0') {
        if (*p == letter) {
            
            count++;
            cout << j<<" "; 

        }
        j++;
        p++;
    }
    cout << "letter was found " << count << " times"<<endl;

    
    





}

