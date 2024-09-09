#pragma once
class person //файл дизайна
{
	char* name;
	int age;
public:
	person();
	person(const char* name, int age);
	~person();
	void Output();
	void SetAge(int NewAge);
	void SetName(const char* NewName);
	void GetName();
	void GetAge();
	void Input();
};

