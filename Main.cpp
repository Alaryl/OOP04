//Александр Бекус
// Alexander Bekus
// create class BankAccount (bank account) with attributes last name, first name, balance, personal number
// Methods - default constructor, constructor with parameters, get, set, print, put money into the account, withdraw money from the account.
// Provide that it is impossible to withdraw more money from the account than there is.
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	BankAccount a("Gleb", "Tereshkin" ,100 ,"7637905A001PB6");
	a.print();
	a.TopUpBalance(100);
	a.print();
	a.TakeOfBalance(143);
	a.print();

}
