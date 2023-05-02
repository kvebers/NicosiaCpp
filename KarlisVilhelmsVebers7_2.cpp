// Karlis Vilhelms Vebers Sheet 7 task 2
#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]);
int main()
{
    char word1[100];
    char word2[100];
    cout << "Enter a word that is going to be checked as substring ";
    cin >> word1;
    cout << "Enter the secound word ";
    cin >> word2;
    if (indexOf(word1, word2) != -1) {
        cout << "There is a match";

    }
    else {
        cout << "There is no match";
    }
}

int indexOf(const char s1[], const char s2[]) {
    int i;
    if (strlen(s1) > strlen(s2)) {
        return -1;
    }
    
    for (i = 0; i < strlen(s1); i++) {
        if (s1[i] != s2[i]) {
            
            return -1;
        }
    }
    return s2[0];

}
