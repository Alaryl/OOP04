//јлександр Ѕекус
//создать класс BankAccount (банковский счет) с атрибутами фамили€, им€, баланс, личный номер
//ћетоды - конструктор по умолчанию, конструктор с параметрами, get, set, print, положить деньги на счЄт, сн€ть деньги со счета.
//ѕредусмотреть, что со счета невозможно сн€ть денег больше, чем там есть.
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;
int main() {
	BankAccount a("Gleb", "Tereshkin" ,100 ,"7637905A001PB6");
	a.print();
	a.TopUpBalance(100);
	a.print();
	a.TakeOfBalance(143);
	a.print();

}
