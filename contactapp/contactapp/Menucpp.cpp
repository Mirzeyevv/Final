#include "MenuHeader.h"

void printMenu(char* arr) {

    system("cls");
    cout << "All Contacts" << arr[0] << endl;
    cout << "Add contact" << arr[1] << endl;
    cout << "Search" << arr[2] << endl;
    cout << "Exit" << arr[3] << endl;
}

void changeArr(char* arr, int index, int size) {
    for (int i = 0; i < size; i++)
    {
        if (i == index)
            arr[i] = '<';
        else arr[i] = ' ';
    }
}

int menu() {

    char ch;

    int i = 0;
    char* arr = new char[3];
    while (true)
    {
        changeArr(arr, i, 4);
        printMenu(arr);
        ch = _getch();
        if (int(ch) == -32) {
            ch = _getch();
            switch (int(ch))
            {
            case Up: i = i == 0 ? 3 : i - 1; break;
            case Down: i = i == 3 ? 0 : i + 1; break;
            }
        }
        else if (int(ch) == Enter) {
            return i;
        }
    }
}
