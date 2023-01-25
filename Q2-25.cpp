#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	double grade;
};

int main() {
	Student student;
	ifstream file;
	file.open("student.txt");
	file >> student.name;
	file >> student.age;
	file >> student.grade;
	file.close();

	cout << student.name << endl;
	cout << student.age << endl;
	cout << student.grade << endl;

	return 0;
}
