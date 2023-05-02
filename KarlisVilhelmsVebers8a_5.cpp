//Karlis Vilhelms Vebers 8a Task 5

#include <iostream>
using namespace std;
int main()
{
    char name[30];
    cout << "Input a name ";
    cin >> name;
    char* point = &name[0];
    bool Check = true;
    do {
        if (*point < 'z' + 1 && *point>'a' - 1 || *point < 'Z' + 1 && *point>'A' 
            || *point == '-' || *point == ' ' || *point == '\'')
            point++;
        else 
            Check = false;
    } while (*point != '\0' && Check == true);
    if (Check)
        cout << "The name is valid";
    else
        cout << "The name is invalid";
        

        
}

