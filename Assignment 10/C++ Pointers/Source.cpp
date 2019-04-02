#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Whassup" << endl;

	int age = 21;

	//V makes a pointer & means the address
	int* pAge = &age;

	//To use the actual pointer, use it with a star
	cout << "Suke Liewalker is " << *pAge << " years old." << endl;

	cout << "Let's see the pointer's value's true format: " << pAge << "." << endl;

	system("pause");
}