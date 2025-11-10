#pragma once

class Person {
private:
	char* name;
	int age;
public:
	Person();
	Person(const char* s, int n);
	~Person();
	void setName(const char* s);
	void setAge(int t);
	void print() const;
};