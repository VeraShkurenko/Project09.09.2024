#include "person.h" // файл реализации
#include <iostream>
#include <cstring>
#include<Windows.h>
using namespace std;


person::person()
{
	name = nullptr;
	age = 0;

}

person::person(const char* Name, int Age)
{
	name = new char[strlen(Name) + 1];
	strcpy_s(name, strlen(Name) + 1, Name);
	age = Age;
}

person::~person()
{
	if (name != nullptr)
	{
		delete[] name;
	}
	cout << "Destruct\n";
	Sleep(1000);
}

void person::Output()
{
	cout << "Name: " << name << endl << "Age: " << age << endl << endl;
}
