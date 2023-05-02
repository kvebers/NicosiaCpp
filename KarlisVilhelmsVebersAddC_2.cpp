// KarlisVilhelmsVebersAddC_2.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;
int IndexOff(const char s1[], const char s2[]);
int main()
{
    char s1[100], s2[100];
    cout << "Input word where substring is going to be searched ";
    cin >> s1;
    cin.clear();
    cout << "input a substring ";
    cin >> s2;

    if (IndexOff(s1, s2) == 1) {
        cout << endl;
        cout << s2 << " is a substring of " << s1;
    }
    else {
        cout << endl;
        cout << s2 << " is not a substring of " << s1;
    }
}

int IndexOff(const char s1[], const char s2[]){
    int i = 0;
    
    if (strlen(s2) > strlen(s1))
        return 0;
    
    while(i!=strlen(s1)){
        int y = 0;
        while (s1[i + y] == s2[y]) {
            
            if (y == strlen(s2)-1)
                return 1;
            y++;
            
        }
        i++;
    }
    return 0;
}