#pragma once
class person //���� �������
{
	char* name;
	int age;
public:
	person();
	person(const char* name, int age);
	~person();
	void Output();
};

