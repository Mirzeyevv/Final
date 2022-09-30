#include "ContactStructHeader.h"


void WriteAllContactsToTextFile(Contact* contacts, int size) {
    FILE* f;
    fopen_s(&f, "contacts.txt", "w");
    for (int i = 0; i < size; i++) {
        fputs(contacts[i].ContactName, f);
        fputs(".", f);
        fputs(contacts[i].ContactNumber, f);
        fputs("-", f);
        fputs("\n", f);
    }
    fclose(f);
}