#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

string slowa1[40], slowa2[40];
int words;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	cout << "Wpisz ile tlumaczeñ: ";
	cin >> words;
	for (int i = 0; i < words; i++)
	{
		cout << "Napisz " << i+1 << " s³ówko angielskie: " << endl;
		cin >> slowa1[i];
		cout << "Napisz teraz slowo po polsku: " <<endl;
		cin >> slowa2[i];
		system("cls");
	}
	for (int i = 0; i < words; i++)
	{
		cout << slowa1[i] << " - " << slowa2[i] << endl;
	}
	_getch();

	return 0;
}