#include "EditHeader.h"


void EditContact(Contact*& contacts, int size, int index) {


	int secimedit;
	cout << "\nNeyi edit etmek isteyirsiniz ? ( Seciminizi reqemle edin ! )\n1) Ad\n2) Number\n";
	cin >> secimedit;

	if (secimedit == 1) {


		char* name = new char[20]{};

		cout << "Ad--> ";

		while (strlen(name) == 0)

			cin.getline(name, 20);

		strcpy_s(contacts[index].ContactName, strlen(name) + 1, name);

		delete[] name;

	}

	else if (secimedit == 2) {

	labeleditnumber1:

		char* number = new char[20]{};

		cout << "\nNomre--> ";

		while (strlen(number) == 0)

			cin.getline(number, 20);

		for (int i = 0; number[i] != '\0'; i++)

		{

			if (!(int(number[i] > 47 && int(number[i]) < 58))) {


				cout << "\nYou inserted number !" << endl;

				goto labeleditnumber1;


			}

		}

		strcpy_s(contacts[index].ContactNumber, strlen(number) + 1, number);
		delete[] number;

	}

	else {

		cout << "\nSeciminiz yanlisdi yeniden edin\n";


	}
}
