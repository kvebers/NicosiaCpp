// KarlisVilhelmsVebers7_2.cpp : This file contains the 'main' function. Program execution begins and ends there.


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

int main()
{
    Book book;
    cout << "Enter author ";
    cin.getline(book.author, 40);
    cout << "Enter title ";
    cin.getline(book.title, 40);

    cout << "Enter publisher ";

    cin.getline(book.publisher, 40);
    cout << "Enter a price ";
    cin >> book.price;
    cout << "Enter year of publication ";
    cin >> book.date.year;
    cout << "Enter the ISBN code, 13 numbers ";
    cin >> book.ISBN;

    cout << "Author: "<<book.author << endl;
    cout << "Title: " << book.title << endl;
    cout << "Year of publishing: " << book.date.year<<endl;
    cout << "Publisher: " << book.publisher<<endl;
    cout << "ISBN code: ISBN " << book.ISBN[0] << book.ISBN[1] << book.ISBN[2] << "-"
        << book.ISBN[3] << "-" << book.ISBN[4] << book.ISBN[5] << "-" << book.ISBN[6] << book.ISBN[7] <<
        book.ISBN[8] << book.ISBN[9] << book.ISBN[10] << book.ISBN[11] << "-" << book.ISBN[12];
        
    cout << book.price;
};

