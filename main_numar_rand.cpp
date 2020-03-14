#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int a, nr, k = 0, x;

	cout << "Apasa ENTER pentru a continua.." << endl;
	cin.get();
	cout << "Alegeti un nivel:" << endl;
	cout << "1. Usor(0-100)" << endl;
	cout << "2. Mediu(100-500)" << endl;
	cout << "3. Greu(500-1000)" << endl;
	cin >> x;
	if (x == 1)
		a = rand() % 100;
	else
		if (x == 2)
			a = 100 + rand() % 500;
		else
			if (x == 3)
				a = 500 + rand() % 1000;
			else { cout << "Introduceti din nou nivelul: "; cin >> x; }
	cout << a;
	for (int i = 1; i <= 100; i++)
		cout << endl;
	cout << "Introduceti un numar: ";
	cin >> nr; k++;
	while (nr != a && k < 5)
	{
		cout << "Nu ati ghicit numarul!" << endl;
		cout << "Incearca din nou!";
		cin >> nr;
		k++;

	}
	if (nr == a)
		cout << "Ati ghicit numarul!!!";
	return 0;
}
