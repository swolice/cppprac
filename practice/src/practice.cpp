//============================================================================
// Name        : practice.cpp
// Author      : swolice
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp=a;
	a=b;
	b=temp;
}


void test_bool() {
	int a;
	bool b = true;
	cout << "b=" << b << endl << "sizeof(b)=" << sizeof(b) << endl;

	b = 3;
	a = b;
	cout << "a=" << a << endl << "b=" << b << endl;

	a = 10;
	b = a;
	cout << "a=" << a << endl << "b=" << b << endl;

	b = 0;
	cout << "b=" << b << endl;

	b++;
	cout << "b=" << b << endl;
	b = b + 1;
	cout << "b=" << b << endl;

}

void test_three()
{
	int a=1;
	int b=2;
	(a<b?a:b)=3;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
}

void test_reference()
{
	int a=4;
	int& b=a;
	b=5;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	cout<<"&a="<<&a<<endl<<"&b="<<&b<<endl;
}

void test_swap()
{
	int a=4;
	int b=5;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	swap(a, b);
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
}



int main() {

//	test_bool();
//	test_three();

//	test_reference();
	test_swap();

	return 0;
}
