#include<iostream>
#include<Windows.h>
using namespace std;

class Student
{
    char* name;
    int age;
public:
    Student() // construct by default
    {
        name = nullptr;
        age = 0;
    }
    Student(const char* Name)
    {
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);
    }
    Student(const char* Name, int Age) : Student(Name)
    {
        age = Age;
    }



    void Output()
    {
        cout << "Name: " << name << endl
            << "Age: " << age << endl << endl;
    }
    ~Student()
    {
        if (name != nullptr)
        {
            delete[] name;
        }
        cout << "Destruct\n";
        Sleep(1000);

    }


};

int main()
{
    Student obj1("Oleg", 21);
    obj1.Output();

    /*Student mas[2]{ {"Alena",20 }, {"Maksim", 22} };
    for (int i = 0; i < 2; i++)
    {
      mas[i].Output();
      }*/



    system("pause");
}