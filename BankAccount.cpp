#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;
BankAccount::BankAccount() {
	Name = "";
	Surname = "";
	balance = 0;
	ID = "";
}



//конструктор с параметрами
BankAccount::BankAccount(string fname, string fsurname, unsigned int fbalance, string fid) {
	Name = fname;
	Surname = fsurname;
	balance = fbalance;
	ID = fid;
}
void BankAccount::setName(string fname) { Name = fname; }
void BankAccount::setSurname(string fsurname) { Surname = fsurname; }
void BankAccount::setBalance(unsigned int fbalance) { balance = fbalance; }
void BankAccount::setID(string fid) { ID = fid; }

string BankAccount::getName(string) { return Name; }
string BankAccount::getSurName(string) { return Surname; }
unsigned int BankAccount::getBalance(unsigned int) { return balance; }
string BankAccount::getID(string) { return ID; }



void BankAccount::print() {
	cout << Surname << ' ' << Name << ' ' << "ID: " << ID << endl << "Balance: " << balance << "$" << endl << endl;

}
void BankAccount::TopUpBalance(unsigned int fbalance) {
	cout << "Add " << fbalance << "$" << endl;
	balance += fbalance;
}
void BankAccount::TakeOfBalance(unsigned int fbalance) {
	if (fbalance < balance) { 
		cout << "Filmed " << fbalance << "$" << endl;
		balance -= fbalance; 
	}
	else
		cout << "Error: insufficient funds" << endl;
}
