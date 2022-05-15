#include <iostream>

using namespace std;

int chs, sht, i=0, entint, revs, i_two=0;
string ent;

void bnr()
{
cout << "Cesar Crypt/Uncrypt" << endl;
cout << "1)Crypt " << "\n" << "2)Uncrypt" << "\n" ">>> " << endl;
cin >> chs;
}

//Racshifrovka
void cesuncrt()
{
	int sht_two;
	string ent_two;
	cout << "Enter a crypt string: ";
	cin >> ent_two;
	cout << "Enter a key(shift): ";
	cin >> sht_two;
	for(i_two=0;i_two<ent_two.length();i_two++)
	{
		int entint_two = ent_two[i_two];
		int revs_two = entint_two-sht_two%26;
		cout << char(revs_two);
	}
	
}

//Crypt
void cescrt()
{
	cout << "Enter a string: ";
	cin >> ent;
	cout << "Enter a shift: ";
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
