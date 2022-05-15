#include <iostream>
#include <locale.h>

using namespace std;

int chs, sht, i=0, entint, revs, i_two=0;
string ent;

void bnr()
{
cout << "Программа шифрует строки по алгоритму Цезаря" << endl;
cout << "1)Зашифровать " << "\n" << "2)Расшифровать" << "\n" ">>> " << endl;
cin >> chs;
}

void cesuncrt()
{
	int sht_two;
	string ent_two;
	cout << "Ведите зашифрованную строку: ";
	cin >> ent_two;
	cout << "Введите ключ(сдвиг): ";
	cin >> sht_two;
	for(i_two=0;i_two<ent_two.length();i_two++)
	{
		int entint_two = ent_two[i_two];
		int revs_two = entint_two-sht_two%26;
		cout << char(revs_two);
	}
	
}

void cescrt()
{
	cout << "Введите строку: ";
	cin >> ent;
	cout << "Введите сдвиг: ";
	cin >> sht;
	for(i=0; i<ent.length(); i++)
	{
		 entint = ent[i];
		 revs = entint+sht%26;
		 cout << char(revs);
	}
}

int main()
{
	bnr();
	switch(chs)
	{
		case 1: cescrt();break;
		case 2: cesuncrt();break;
		default: bnr();
	
	}
	return 0;
}
