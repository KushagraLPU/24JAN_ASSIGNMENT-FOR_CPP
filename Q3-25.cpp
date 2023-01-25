#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Book
{
public:
    string title;
    string author;
    string ISBN;
    double price;
    int stock;
};

int main()
{
    Book book;
    book.title = "The C++ Programming Language";
    book.author = "Bjarne Stroustrup";
    book.ISBN = "978-0321563842";
    book.price = 59.99;
    book.stock = 10;

    ofstream out("book.dat", ios::binary);
    	out<< book.title << endl;
	out<< book.author << endl;
out<< book.ISBN << endl;
out<< book.price << endl;
out<< book.stock<<endl;
	out.close();

    return 0;
}
