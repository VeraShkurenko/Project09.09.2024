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
};

