#include "MenuHeader.h"
#include "AddHeader.h"
#include "AllContactsHeader.h"
#include "SearchContactHeader.h"
using namespace std;


void main() {

	int size = 0;

	FILE* f;
	fopen_s(&f, "contacts.txt", "r");

	char* bf = new char[100]{};

	while (fgets(bf, 100, f) != nullptr) {

	for (size_t i = 0; bf[i] != '-'; i++)
		
	{
		cout << bf[i];
		
	}

	size++;
	cout << "\n";

	}

	delete[] bf;

	fclose(f);

	FILE* ff;

	Contact* contacts = new Contact[size]{};

	fopen_s(&ff, "contacts.txt", "r");

	char* bff = new char[100]{};
	int j = 0;

	while (fgets(bff, 100, f) != nullptr) {

		int indexx = 0;
		char* name = new char[20]{};

		for (size_t i = 0; bff[i] != '.'; i++)
		{
			indexx++;
		}

		for (size_t i = 0; i < indexx; i++)
		{
			name[i] = bff[i];
		}

		strcpy_s(contacts[j].ContactName, strlen(name) + 1, name);
		
		
		indexx = 0;
		int indexxnumber = 0;
		char* number = new char[20]{};
		bool checknumber = false;

		for (size_t i = 0; bff[i] != '-'; i++)
		{
			if (bff[i] == '.') {

				checknumber = true;

			}

			if (checknumber) {
				indexxnumber++;
			}
			indexx++;
		}

		for (size_t i = 0; i < indexxnumber-1; i++)
		{

			number[i] = bff[indexx-indexxnumber+1+i];

		}

		strcpy_s(contacts[j].ContactNumber, strlen(number) + 1, number);

		j++;

	}

	delete[] bff;
	fclose(ff);

	while (true) {

	int returnmenu = menu();

	if (returnmenu == 0) {
	AllNames(contacts, size);

	}
	else if (returnmenu == 1) {

	AddAndCheckContacts(contacts, size);

	}

	else if (returnmenu == 2) {

	searchcontact(contacts,size);

	}

	else {

	break;

	}

	}

	system("cls");

	cout << "\nSee you\n";

	WriteAllContactsToTextFile(contacts, size);

	delete[] contacts;

}