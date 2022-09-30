#include "SearchContactHeader.h"

void searchcontact(Contact* contacts, int size) {

	system("cls");
	label:
	int secim;
	cout << "1) Ada gore axtaris (1)\n2) Nomreye gore axtaris (2)" << endl;
	cin >> secim;

	if (secim == 1) {

		char* searchingname = new char[20]{};
		bool checknamesearch = false;

		cout << "Axtaris olunacaq soz --> ";

		while (strlen(searchingname) == 0)

			cin.getline(searchingname, 20);
		
	
		int countnamefound = 0;
		
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < strlen(contacts[i].ContactName); j++)
			{
				if (contacts[i].ContactName[j] == searchingname[0]) {

					for (size_t g = 0; g < strlen(searchingname); g++)
					
					{
						if (contacts[i].ContactName[j + g] == searchingname[g]) {
							
							checknamesearch = true;

						}
					}

				}
			}

			if (checknamesearch) {
				cout << endl << contacts[i].ContactName << " --> " << contacts[i].ContactNumber << endl;
				countnamefound++;
				checknamesearch = false;
			}
		}
		
		cout << "\nBu adla uygunlasan " << countnamefound << " kontakt var" << endl;
	}

	else if (secim == 2) {

		char* searchingnumber = new char[20]{};
		cout << "Axtaris olunacaq nomre --> ";

		while (strlen(searchingnumber) == 0)

			cin.getline(searchingnumber, 20);

		int countnumberfound = 0;


		bool checknumbersearch = false;

		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < strlen(contacts[i].ContactNumber); j++)
			{
				if (contacts[i].ContactNumber[j] == searchingnumber[0]) {

					for (size_t g = 0; g < strlen(searchingnumber); g++)
					{
						if (contacts[i].ContactNumber[j + g] == searchingnumber[g]) {
							checknumbersearch = true;
						}
					}
				}
			}

			if (checknumbersearch) {
				cout << endl << contacts[i].ContactName << " --> " << contacts[i].ContactNumber << endl;
				checknumbersearch = false;
				countnumberfound++;
			}
		}
		cout << "\nBu nomre ile uygunlasan " << countnumberfound << " kontakt var" << endl;

	}

	else {

		cout << "Seciminiz yanlisdir !!" << endl;
		goto label;

	}


	cout << "\n\nEger cixis etmek isteyirsinizse \"Esc\"-e basin\n";

	int ch;
	ch = _getch();

	if (int(ch) == Esc)
		return;



}