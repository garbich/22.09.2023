#pragma once
#include <iostream> 
#include <vector> 
using namespace std;


class Lib
{
private:

    class Book
    {
    private:
        string name;
        string author;
        int year;
        bool inLib;

    public:
        Book();

        Book(string name, string author, int year, bool inLib);

        string getName();
        string getAuthor();
        int getYear();
        bool getInLib();

        void setInLib(bool inLib);

    };

    vector<Book*> books;

public:

    void addBook(string name, string author, int year, bool inLib);

    int searchBook(string name, string author);

    void deleteBook(string name, string author);

    void publicationBook(string name, string author);

    void returnBook(string name, string author);

    void display();

};
