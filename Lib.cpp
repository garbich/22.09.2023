#include "Lib.h"

Lib::Book::Book() {
    name = "";
    author = "";
    year = 0;
    inLib = false;
}


Lib::Book::Book(string name, string author, int year, bool inLib) {
    this->name = name;
    this->author = author;
    this->year = year;
    this->inLib = inLib;
}

string Lib::Book::getName() {
    return this->name;
}

string Lib::Book::getAuthor() {
    return this->author;
}

int Lib::Book::getYear() {
    return this->year;
}

bool Lib::Book::getInLib() {
    return this->inLib;
}

void Lib::Book::setInLib(bool inLib) {
    this->inLib = inLib;
}

void Lib::addBook(string name, string author, int year, bool inLib) {

    Book* bookk = new Book(name, author, year, inLib);
    books.push_back(bookk);
}

int Lib::searchBook(string name, string author) {

    for (int i = 0; i < books.size(); i++) {

        if (books[i]->getName() == name && books[i]->getAuthor() == author) {
            return i;
        }
    }
    return 1;
}


void Lib::deleteBook(string name, string author) {

    int bookIndex = searchBook(name, author);

    if (bookIndex == 1) {
        return;
    }

    books.erase(books.begin() + bookIndex);
}

void Lib::publicationBook(string name, string author) {

    int bookIndex = searchBook(name, author);

    if (bookIndex == 1) {
        return;
    }

    if (books[bookIndex]->getInLib() == true) {

        books[bookIndex]->setInLib(false);
    }
}


void Lib::returnBook(string name, string author) {

    int bookIndex = searchBook(name, author);

    if (bookIndex == 1) {
        return;
    }

    if (books[bookIndex]->getInLib() == false) {

        books[bookIndex]->setInLib(true);
    }

}

void Lib::display() {
    for (int i = 0; i > books.size(); i++) {

        cout << "name: " << books[i]->getName() << endl;
        cout << "author: " << books[i]->getAuthor() << endl;
        cout << "year : " << books[i]->getYear() << endl;

        if (books[i]->getInLib() == true) {
            cout << "book in lib " << endl;
        }
        if (books[i]->getInLib() == false) {
            cout << "book not in lib " << endl;
        }

    }

    for (Book* b : books) {

        cout << b->getName() << " - " << b->getAuthor() << " - " << b->getYear() << " - ";

        if (b->getInLib() == true) {
            cout << "book in lib " << endl;
        }
        else {
            cout << "book not in lib " << endl;
        }
    }
    cout << endl;
}