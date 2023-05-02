// KarlisVilhelmsVebers7_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void prefix(char array1[], char array2[]);
int main()
{
    char array1[100];
    char array2[100];
    
    cout << "Enter the first word ";
    cin >> array1;
    cout << "Enter the secound word ";
    cin >> array2;
    prefix(array1, array2);
    
}
void prefix(char array1[], char array2[]) {
    int i = 0;
    char array3[100];
    while (array1[i] == array2[i]) {
        array3[i] = array1[i];
        i++;
    }
    array3[i] = '\0';
    if (strlen(array3) > 0) {
        cout << "The prefix is " << array3;
    }
    else {
        cout << "There is no prefix";
    }
}
