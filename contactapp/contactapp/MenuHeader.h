#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


enum Keys
{
    Up = 72,
    Down = 80,
    Enter = 13,
    Esc = 27
};

void printMenu(char* arr);
void changeArr(char* arr, int index, int size);
int menu();
