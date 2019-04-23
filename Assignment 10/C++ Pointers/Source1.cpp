#include <iostream>
#include <string>

using namespace std;

string playerName;
string loginChoice;
string* bankInfo;
int* currentMoney;
int chosenAction;
int* rich_Money;
int depositAmnt;
int myMoney;

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


void deposit()
{
	cout << "How much would you like to deposit?" << endl;
	cin >> depositAmnt;
	cout << "Validating..." << endl;
	*currentMoney = *currentMoney + depositAmnt;
	cout << "Amount has been deposited." << endl;
	cout << "Your new balance is:" << *currentMoney;
	cout << "MyMoney is: " << myMoney;
}

void withdraw()
{
	
}

void sendMoney()
{
	
}

void deleteAcct()
{
	
}

void welcomeBack()
{
	cout << "Welcome back " << loginChoice << "! :)" << endl;
	cout << "Please enter the number of your next action." << endl;
}

void chooseAction()
{
	cout << endl;
	cout << "Action: ";
	cin >> chosenAction;

	if (chosenAction == 1)
	{
		cout << "Current balance: " << *currentMoney << endl;
		pause();
		chooseAction();
	}
	if (chosenAction == 2)
	{
		deposit();
	}
	if (chosenAction == 3)
	{
		withdraw();
	}
	if (chosenAction == 4)
	{
		sendMoney();
	}
	if (chosenAction == 5)
	{
		deleteAcct();
	}
	else
	{
		cout << "Please enter the action's corresponding number." << endl;
		chooseAction();
	}
}

void accountActions()
{
	cout << endl;
	cout << "1. See banking info" << endl;
	cout << "2. Deposit money" << endl;
	cout << "3. Withdraw money" << endl;
	cout << "4. Send money" << endl;
	cout << "5. Delete Account" << endl;
	chooseAction();
}



void richAccount()
{
	int richMoney = 6900000;
	currentMoney = &richMoney;
	
	welcomeBack();
	accountActions();
	chooseAction();
	pause();
}

void playerAccount()
{
	myMoney = 25;
	currentMoney = &myMoney;

	welcomeBack();
	accountActions();
	chooseAction;
	pause();
}

void yonceAccount()
{
	int richMoney = 4599;
	currentMoney = &richMoney;

	welcomeBack();
	accountActions();
	chooseAction();
	pause();
}

void margAccount()
{
	int richMoney = 125;
	currentMoney = &richMoney;

	welcomeBack();
	accountActions();
	chooseAction();
	pause();
}

void accountList()
{
	cout << endl;
	cout << "- Marg.Spencer" << endl;
	cout << "- Beyonce_K123" << endl;
	cout << "- " << playerName << endl;
	cout << "- RichBoy1992" << endl;
	cout << endl;
}

void chooseAccount()
{
	accountList();
	cout << "User: ";
	cin >> loginChoice;

	if (loginChoice == "Marg.Spencer")
	{
		twoSpace();
		margAccount();
	}
	if(loginChoice == "Beyonce_K123")
	{
		twoSpace();
		yonceAccount();
	}
	if (loginChoice == playerName)
	{
		twoSpace();
		playerAccount();
	}
	if (loginChoice == "RichBoy1992")
	{
		twoSpace();
		richAccount();
	}
	else
	{
		cout << "\nPlease use one of the existing users:" << endl;
		chooseAccount();
	}

}

void main()
{
	cout << "Please enter a Username: ";
	cin >> playerName;
	system("CLS");
	cout << "Welcome to the Totally Secure UA&T Banking Site" << endl;
	cout << "Where all deposits, are none of our business :)" << endl;
	pause();

	twoSpace();
	cout << "Sign in to an existing user account." << endl;
	chooseAccount();
}