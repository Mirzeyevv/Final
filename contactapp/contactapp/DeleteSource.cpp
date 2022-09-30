#include "DeleteHeader.h"

void DeleteContact(Contact*& contacts, int& size, int index) {


	cout << "1) Silmek istediyinizden eminsinizse entere basin --> ";
	cout << "\n2) Eger geri qayitmaq isteyirsinizse Esc ye basin --> ";

	char ch;

	ch = _getch();

	if (int(ch) == Enter) {

		Contact* temp = new Contact[size - 1]{};
		int j = 0;

		for (size_t i = 0; i < size; i++)
		{
			if (i != index) {

				temp[j].CopyContact(contacts + i);
				j++;
			}



		}

		delete[] contacts;
		contacts = temp;
		temp = nullptr;
		size--;

	}
}

void printEditDelete(Contact* contacts, int size, int index, char* arr) {
	system("cls");
	cout << "Name --> " << contacts[index].ContactName << endl;
	cout << "Number --> " << contacts[index].ContactNumber << endl;

	cout << "\nEdit Contact" << arr[0] << endl;
	cout << "Delete contact" << arr[1] << endl;
	cout << "Back" << arr[2] << endl;
}