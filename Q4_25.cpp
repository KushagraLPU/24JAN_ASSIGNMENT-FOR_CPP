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

int main() {
	Book book;
	ifstream file;
	file.open("student.txt");
    file >> book.title;
    file >> book.author;
	file >> book.ISBN;
	file >> book.price;
	file >> book.stock;

	file.close();

	cout << book.title << endl;
	cout << book.author << endl;
	cout << book.ISBN << endl;
	cout << book.price <<endl;
	cout << book.stock <<endl;

	return 0;
}
