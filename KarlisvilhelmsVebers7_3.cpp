// KarlisvilhelmsVebers7_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Date {
    int year;
};
struct Book {
    char author[50];
    char title[50];
    char publisher[50];
    Date date;
    char ISBN[14];
    double price;

};
int expensive(Book ebook[], int size);
void print(Book ebook[], int size);
int main()
{
    Book book[6
    ];
    for (int i = 0; i < 5; i++) {
        
        
        cout << "Enter author ";
        cin.getline(book[i].author, 40);
        cout << "Enter title ";
        cin.getline(book[i].title, 40);

        cout << "Enter publisher ";

        cin.getline(book[i].publisher, 40);
        cout << "Enter a price ";
        cin >> book[i].price;
        cout << "Enter year of publication ";
        cin >> book[i].date.year;
        cout << "Enter the ISBN code, 13 numbers ";
        cin >> book[i].ISBN;
        cin.ignore();
    }
    print(book, 5);
    
    cout << endl;
    cout << "The most expensive book"<<endl;
    int i = expensive(book, 5);
    cout << "Author: " << book[i].author << endl;
    cout << "Title: " << book[i].title << endl;
    cout << "Year of publishing: " << book[i].date.year << endl;
    cout << "Publisher: " << book[i].publisher << endl;
    cout << "ISBN code: ISBN " << book[i].ISBN << endl;

    cout << "price of the book:" << book[i].price << endl;
}

int expensive(Book ebook[],int size) {
    int exp = ebook[0].price;
    int ret=0;
    for (int i = 0; i < size; i++) {
        if (exp < ebook[i].price) {
            exp = ebook[i].price;
            ret = i;
        }
    }
    return ret;
}

void print(Book ebook[], int size) {
    for (int i = 0; i < size; i++) {

        cout << endl;
        cout << i + 1 << " book in the database" << endl;

        cout << "Author: " << ebook[i].author << endl;
        cout << "Title: " << ebook[i].title << endl;
        cout << "Year of publishing: " << ebook[i].date.year << endl;
        cout << "Publisher: " << ebook[i].publisher << endl;
        cout << "ISBN code: ISBN " << ebook[i].ISBN << endl;

        cout << "price of the book:" << ebook[i].price << endl;

    }
}