//��������� �����
//������� ����� BankAccount (���������� ����) � ���������� �������, ���, ������, ������ �����
//������ - ����������� �� ���������, ����������� � �����������, get, set, print, �������� ������ �� ����, ����� ������ �� �����.
//�������������, ��� �� ����� ���������� ����� ����� ������, ��� ��� ����.
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
