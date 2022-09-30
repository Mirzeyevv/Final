#include "AddHeader.h"

void AddAndCheckContacts(Contact*& arr, int& size) {

    system("cls");

label2:

    char* name = new char[20];



    cout << "Kontaktin adini daxil edin -> ";
    cin.getline(name, 20);

    if (name[0] != '\0') {
    label:



        char* number = new char[16];

        cout << "\nInsert phone number: ";

        cin.getline(number, 15);

        if (number[0] == '\0') {

            cout << "\nBos nomre ola bilmez\n";
            goto label;

        }

        for (int i = 0; number[i] != '\0'; i++)

        {

            if (!(int(number[i] > 47 && int(number[i]) < 58))) {

                cout << "\nYou inserted number !" << endl;
                goto label;

            }
        }



        Contact* temp = new Contact[size + 1]{};

        for (int i = 0; i < size; i++)

        {

            temp[i].CopyContact(arr + i);

        }

        temp[size].ContactName = name;
        temp[size].ContactNumber = number;


        delete[] arr;
        arr = temp;
        temp = nullptr;
        size++;

        WriteAllContactsToTextFile(arr, size);

    }

    else {
        cout << "\nBos ad ola bilmez\n\n";
        goto label2;
    }



}