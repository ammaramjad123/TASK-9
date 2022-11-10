class account {

private:
	char * name;
	int number;
	char *accounttype;
	int balance;
	int deposit;
	int withdraw;

public:

	account();
	~account();

	void setname(char*);
	void setnumber(int);
	void setaccounttype(char*);
	void setbalance(int);

	char * getname();
	int getnumber();
	char * getaccounttype();
	int getbalance();

	void setdeposit(int);
	void setwithdraw(int);

};