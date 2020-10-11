#include <iostream>
#include <string>


using namespace std;

class Account
{
public:
	string name;
	int id;
	double balance;

	// Initialize a bank account object
	Account(const string& customer_name, int account_number, double amount) :
		name(customer_name), id(account_number), balance(amount) {
		cout << "Creating Account object #" << id << endl;
		if (amount < 0)
		{
			cout << "Warning : negative account balance" << endl;
			balance = 0.0;
		}
	}

	Account() {
		cout << "Destroying Account object #" << id << endl;
	}

	void deposit(double amt)
	{
		balance += amt;
	}

	bool withdraw(double amt)
	{
		bool result = false;
		if (balance - amt >= 0)
		{
			balance -= amt;
			result = true;
		}
		return result;
	}

	void display() 
	{
		cout << "Name : " << name << ", ID: " << id << ", Balance: " << balance << endl;
	}
};

int main()
{
	Account acct1("Joe", 2312, 1000.00);
	Account acct2("Moe", 2313, 500.29);
	acct1.display();
	acct2.display();
	cout << "----------------------------" << endl;
	acct1.withdraw(800.00);
	acct2.deposit(22.00);
	acct1.display();
	acct2.display();
}