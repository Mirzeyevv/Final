#include "SearchHeader.h"

SearchContacts(Contact* contacts, int size) {
	labelsearch:
	int secim = 0;

	cout << "1) Nomreye gore axtaris\n2) Ad-a gore axtaris\n\nSeciminizi reqemle edin(1-Nomre/2-Ad) --> ";

	cin >> secim;

	if (secim == 1) {
		void;
	}
	else if (secim == 2) {
		void;
	}
	else {
		cout << "\nBele bir secim ola bilmez !!\n";
		goto labelsearch;
	}


}