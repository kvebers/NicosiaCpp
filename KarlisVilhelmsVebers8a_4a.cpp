// KarlisVilhelmsVebers8a_4a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char encrypt[100];
    cout << "Enter a sentence " << endl;
    cin.getline(encrypt, 100);
    char *i;
    i = &encrypt[0];

    while (*i != '\0') {
        if (*i == 'z') {
            *i = 'a';
        }
        else if (*i == 'Z') {
            *i = 'A';
        }
        else if (*i != ' ') {
            *i = *i + 1;
        }
        else {
            *i = '*';
        }
        i++;
    }

    cout << "encrypted fail ";
    cout << encrypt << endl;
}

using namespace std;