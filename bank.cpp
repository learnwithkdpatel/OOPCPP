#include <iostream>

using namespace std;

class BankAccount 
{
	private:// only accessible within class
		int AccountNo?;
		char HolderName?[50];
	public:
			double Balance?;	
			public: // functions
	Deposit?(double Amount ) {
		Balance = Balance + Amount;
}
Withdraw?(double Amount ) {
		Balance = Balance - Amount;
}

entry() {
			cout<<“Enter Account No”;
			cin>>AccountNo;
			cout<<“Enter HolderName”;
			cin>>HolderName;
			cout<<“Enter Balance”;
			cin>>Balance;
			}

display() {
	cout<< “Acc:”<<AccountNo;
	cout<<“Name:”<<HolderName;
	cout<<“Balance:”<<Balance;
} } //class ends

main() {
	BankAccount from, to;
	double amount=1000;
	from.entry(); 	to.entry();
	from.withdraw(amount); to.deposit (amount);
	from.display();  to.display();
}




}

int main()
{
	cout << "hello";
}
