#include <iostream>

using namespace std;
char a[4][4], c;
int i, j;
void afisare()
{
	cout << endl;
	cout << " __1_____2____3__ ";
	cout << endl;
	for (int i = 1; i <= 3; i++)
		cout << i << " " << "____|_____|____" << endl;

}

void afis(char a[4][4])
{
	if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != '*')										//diag principala
		cout << "Jucatorul " << a[1][1] << " a castigat" << endl;
	else
		if (a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[3][1] != '*')								   	//diag secundara
			cout << "Jucatorul " << a[1][3] << " a castigat" << endl;
		else
			if (a[1][1] == a[2][1] && a[2][1] == a[3][1] && a[3][1] != '*')								//coloana 1
				cout << "Jucatorul " << a[1][1] << " a castigat" << endl;
			else
				if (a[1][2] == a[2][2] && a[2][2] == a[3][2] && a[3][2] != '*')							// coloana 2
					cout << "Jucatorul " << a[1][2] << " a castigat" << endl;
				else
					if (a[1][3] == a[2][3] && a[2][3] == a[3][3] && a[3][3] != '*')						//coloana 3
						cout << "Jucatorul " << a[1][3] << " a castigat" << endl;
					else
						if (a[1][1] == a[1][2] && a[1][2] == a[1][3] && a[1][1] != '*')					//linie 1
							cout << "Jucatorul " << a[1][1] << " a castigat" << endl;
						else
							if (a[2][1] == a[2][2] && a[2][2] == a[2][3] && a[2][1] != '*')				//linie 2
								cout << "Jucatorul " << a[2][1] << " a castigat" << endl;
							else
								if (a[3][1] == a[3][2] && a[3][2] == a[3][3] && a[3][1] != '*')			//linie 3
									cout << "Jucatorul " << a[3][1] << " a castigat" << endl;
								else
									for (i = 1; i <= 3; i++)
									{
										for (j = 1; j <= 3; j++)
											if (a[i][j] == '*') cout << "___|";
												else 
													cout << "_" << a[i][j] << "_|";
					
										
										cout << endl;
									}
}

int verificare(int l, int col)
{
	if ((l >= 1 && l <= 3) && (col >= 1 && col <= 3))
	{
		if (a[l][col] == '*')
			return 1;
		else
			return 0;
	}
}
int main()
{	
	char r;
	int l, col;
	for (i = 1; i <= 3; i++)
		for (j = 1; j <= 3; j++)
			a[i][j] = '*';
	afisare();
	cout << endl << endl;
	do
	{
		cout << "Doriti sa jucati?<d/n>";
		cin >> r;
		cout << endl;

		cout << " Player X:" << endl;
		cout << "Linie: "; cin >> l;
		cout << endl;

		cout << "Coloana: "; cin >> col;
		if (verificare(l, col) == 1)
		{
			a[l][col] = 'X';
			afis(a);
		}
		else 
			cout << "alegeti alta pozitie" << endl;

		cout << " Player O:" << endl;
		cout << "Linie: "; cin >> l;
		cout << endl;
		cout << "Coloana: "; cin >> col;
		if (verificare(l, col) == 1)
		{
			a[l][col] = 'O';
			afis(a);
		}
		else 
			cout << "alegeti alta pozitie";
		
		
	} while (r == 'd' || r == 'D');

	
	return 0;
}
