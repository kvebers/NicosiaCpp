//Karlis Vilhelms Vebers Sheet 8a Task 3a

#include <iostream>
using namespace std;
int main()
{
    char word[20];
    int i=0, lastpos=0, len;
    char* point;
    cout << "Input a word ";
    cin >> word;
    point = &word[0];
    for (point; *point != '\0'; point++) 
        lastpos++;
        for (len = 0; len<lastpos/2; len++) {
            if (*(point - lastpos + len) == *(point - len - 1));
            else i++;
        }
    
    if (i == 0) cout << "This is a palindrome";
    else cout << "This is not a palindrome";
}

