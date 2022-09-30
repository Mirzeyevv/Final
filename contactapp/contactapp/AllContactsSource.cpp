#pragma once
#include "AllContactsHeader.h"
#include "ContactStructHeader.h"
#include "DeleteHeader.h"
#include "EditHeader.h"
void changeColor(int i) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, i);
}

void changeArrEditDelete(char* arr, int index, int size) {
	for (int i = 0; i < size; i++)
	{
		if (i == index)
			arr[i] = '<';
		else arr[i] = ' ';
	}
}

void AllMelumatlar(Contact*& contacts, int& size, int index) {

	system("cls");
	cout << "Name --> " << contacts[index].ContactName << endl;
	cout << "Number --> " << contacts[index].ContactNumber << endl;

	char ch;
	int i = 0;
	char* arr = new char[3];
	while (true)
	{
		changeArr(arr, i, 4);
		printEditDelete(contacts, size, index, arr);
		ch = _getch();
		if (int(ch) == -32) {
			ch = _getch();
			switch (int(ch))
			{
			case Up: i = i == 0 ? 2 : i - 1; break;
			case Down: i = i == 2 ? 0 : i + 1; break;
			}
		}
		else if (int(ch) == Enter) {

			if (i == 0) {

				EditContact(contacts, size, index);
				return;
			}

			else if (i == 1) {

				DeleteContact(contacts, size, index);
				return;
			}

			else
				return;
		}
	}
}

void print(Contact* contacts, int index, int size) {

	system("cls");
	for (int i = 0; i < size; i++)
	{
		if (i == index) changeColor(Red);
		cout << contacts[i].ContactName << "\n";
		changeColor(White);
	}

	if (index > size - 1)

		changeColor(Red);

	cout << "Back\n";

	changeColor(White);

}

void AllNames(Contact*& contacts, int& size) {


	int i = 0;
	char c;
	while (true)
	{
		print(contacts, i, size);
		c = _getch();
		if (c == -32) {
			c = _getch();
			if (c == 72)
				i = i == 0 ? size : i - 1;
			else if (c == 80)
				i = i == size ? 0 : i + 1;
		}
		else if (c == 13) {
			if (size == i) {
				return;
			}
			AllMelumatlar(contacts, size, i);

		}
	}
}

