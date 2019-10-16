#pragma once

#include<iostream>
using namespace std;

//#define CONSTRUCTORS_CHECK

class String
{
	int size;	//Размер строки
	char* str;	//Адрес строки в динамической памяти
public:
	int get_size() const;
	char* get_str();
	const char* get_str() const;


	//			Constructors:
	String(int size = 80);
	String(const char str[]);
	String(const String& other);
	String(String&& other);
	~String();

	//			Operators:
	String& operator=(const String& other);
	String& operator=(String&& other);

	//			Methods:

	void print();

};

