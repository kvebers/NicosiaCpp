//Karlis VIlhelms Vebers Sheet 7 Task 3
#include <iostream>
using namespace std;
void count(const char s[], int count[]);
int main()
{
    char word[100];
    int counter[26];
    for (int i = 0; i <= 25; i++) {
        counter[i] = 0;
    }
    cout << " Enter a word ";
    cin >> word;
    count(word, counter);
}

void count(const char s[], int count[]) {

    for (int i = 0; i < strlen(s); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z')){
            count[s[i]-65]++;
        }
        if ((s[i] >= 'a' && s[i] <= 'z')) {
            count[s[i]-97]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << (char)(i+65) << ":"<<" "<<count[i]<< " times"<<endl;
        }
    }

}

