// TASK 3 //
#include < iostream>
#include "Header.h"
using namespace std;
int main()
{
	int depo;
	int withdra;
	account a1;

	a1.setname("AMMAR");
	a1.setnumber(123);
	a1.setaccounttype("PREMIUM");
	a1.setbalance(2200);

	cout << "your name is :" << a1.getname() << endl;
	cout << "your number is :" << a1.getnumber() << endl;
	cout << "your account type is :" << a1.getaccounttype() << endl;
	cout << "your balance before deposit or withdraw is :" << a1.getbalance() << endl;

	cout << "ENTER MONEY IF YOU WANT TO DEPOSIT : ";
	cin >> depo;
	a1.setdeposit(depo);

	cout << "ENTER MONEY YOU WANT TO WITHDRAW: ";
	cin >> withdra;
	a1.setwithdraw(withdra);

	system("pause");
	return 0;
}