#include <iostream>
#include <vector> 
#include "Lib.h"
using namespace std;





int main()
{
    Lib lib;

    lib.addBook("Book1", "Author1", 2004, true);
    lib.addBook("Book2", "Author2", 1999, true);
    lib.addBook("Book3", "Author3", 2016, false);

    cout << "books in lib: " << endl;
    lib.display();


    lib.publicationBook("Book1", "Author1");

    lib.display();


    lib.deleteBook("Book3", "Author3");
   
    lib.display();

    lib.returnBook("Book1", "Author1");

    lib.display();
}

