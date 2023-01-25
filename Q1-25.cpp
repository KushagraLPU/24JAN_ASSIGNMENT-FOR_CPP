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
	student.name = "Kushagra";
	student.age = 20;
	student.grade = 80.5;

	ofstream file;
	file.open("student.txt");
	file << student.name << endl;
	file << student.age << endl;
	file << student.grade << endl;
	file.close();

	return 0;
}
