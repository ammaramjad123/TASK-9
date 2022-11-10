#include < iostream>
#include "Header.h"
using namespace std;

account::account()
{
	cout << "WELCOME TO BANK AL-HABIB :" << endl;
	name = nullptr;
	number = 0;
	accounttype = nullptr;
	balance = 0;
	deposit = 0;
	withdraw = 0;
}

account::~account()
{
	if (name == nullptr && accounttype == nullptr)
	{
		delete[]name;
		name = nullptr;
		delete[]accounttype;
		accounttype = nullptr;

	}
	else{
		delete[]name;
		name = nullptr;
		delete[]accounttype;
		accounttype = nullptr;
	}

}

void account::setname(char *na)
{
	int length = 0;
	for (int i = 0; na[i] != '\0'; i++)
	{
		length++;
	}
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		name[i] = na[i];
	}
	name[length] = '\0';
}

void account::setnumber(int num)
{
	number = num;
}

void account::setaccounttype(char *ac)
{
	int length = 0;
	for (int i = 0; ac[i] != '\0'; i++)
	{
		length++;
	}
	accounttype = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		accounttype[i] = ac[i];
	}
	accounttype[length] = '\0';
}

void account::setbalance(int ba)
{
	balance = ba;
}




char * account::getname()
{
	int length = 0;
	for (int i = 0; name[i] != '\0'; i++)
	{
		length++;
	}
	char* temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = name[i];
	}
	temp[length] = '\0';
	return temp;
}

int account::getnumber()
{
	return number;
}

char * account::getaccounttype()
{
	int length = 0;
	for (int i = 0; accounttype[i] != '\0'; i++)
	{
		length++;
	}
	char *temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = accounttype[i];
	}
	temp[length] = '\0';
	return temp;
}

int account::getbalance()
{
	return balance;
}

void account::setdeposit(int deposi)
{
	deposit = deposi;
	if (deposit > 0)
	{
		balance = balance + deposit;
		cout << "You have deposit RS:" << deposit << endl;
		cout << "NOW, THE CURRENT BALANCE IS :" << balance << endl;

	}
	else {
		cout << "You didn't deposit any money :";
		cout << "YOUR CURRENT BALANCE IS :" << balance << endl;

	}

}

void account::setwithdraw(int wit)
{
	withdraw = wit;
	if (withdraw > 0)
	{
		balance = balance - withdraw;
		cout << "You have withdrawn RS:" << withdraw << endl;

		cout << "NOW, THE CURRENT BALANCE IS :" << balance << endl;

	}
	else {
		cout << "You didn't withdraw any money :" << endl;
		cout << "YOUR CURRENT BALANCE IS :" << balance << endl;
	}
}