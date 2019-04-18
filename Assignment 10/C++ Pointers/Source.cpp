#include <iostream>
#include <string>

using namespace std;

string userName;
string passWord;
string* alt_Username = &userName;
string* alt_Password = &passWord;

/*
void example()
{
	int age = 21;

	//V makes a pointer & means the address
	int* pAge = &age;

	//To use the actual pointer, use it with a star
	cout << "Suke Liewalker is " << *pAge << " years old." << endl;

	cout << "Let's see the pointer's value's true format: " << pAge << "." << endl;

	system("pause");
}*/
void pause()
{
	system("Pause");
}

void threeSpace()
{
	cout << "\n\n\n";
}

void twoSpace()
{
	cout << "\n\n";
}

void signIn()
{
	
}

void accountRegister()
{
	cout << "\n\nPlease register an account." << endl;
	pause();
	twoSpace();
	cout << "Please enter a Username: ";
	cin >> userName;
	cout << "\nPlease enter a Password: ";
	cin >> passWord;
}

int main()
{
	cout << "\n\n\tUA&T Bank" << endl;
	cout << "Welcome to the UA&T Bank transfer site." << endl;
	pause();
	twoSpace();
	
	accountRegister();
	threeSpace();

	signIn();
	
	
	pause();

}