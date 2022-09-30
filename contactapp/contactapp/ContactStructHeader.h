#pragma once
#include "MenuHeader.h"

struct Contact
{

    char* ContactName = new char[20]{};
    char* ContactNumber = new char[16]{};

    Contact() {
        
        ContactName = new char[20];
        ContactNumber = new char[16];
    }

    Contact(const char* Name, const char* Number) {

        strcpy_s(ContactName, strlen(Name) + 1, Name);
        strcpy_s(ContactNumber, strlen(Number) + 1, Number);

    }

    void CopyContact(Contact* contact) {
        strcpy_s(ContactName, strlen(contact->ContactName) + 1, contact->ContactName);
        strcpy_s(ContactNumber, strlen(contact->ContactNumber) + 1, contact->ContactNumber);
    }

    void Print() {
        cout << "Name: " << ContactName << endl;
        cout << "Number: " << ContactNumber << endl;
    }

    ~Contact() {

        delete[] ContactName;
        delete[] ContactNumber;

    }
};

void WriteAllContactsToTextFile(Contact* contacts, int size);
