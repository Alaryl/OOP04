#pragma once
#include <string>
using namespace std;
class BankAccount {
	private:
		string Name;
		string Surname;
		unsigned int balance;
		string ID;
	public:
		BankAccount();
		//конструктор с параметрами
		BankAccount(string, string, unsigned int, string);
		void setName(string);
		void setSurname(string);
		void setBalance(unsigned int);
		void setID(string);

		string getName(string);
		string getSurName(string);
		unsigned int getBalance(unsigned int);
		string getID(string);
		void print();
		void TopUpBalance(unsigned int);
		void TakeOfBalance(unsigned int);
}; 