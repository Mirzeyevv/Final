#pragma once
#include "MenuHeader.h"
#include "AddHeader.h"
#include <Windows.h>
using namespace std;

enum Color {

    Red = 4,
    White = 15
};


void printEditDelete(Contact* contacts, int size, int index, char* arr);
void AllMelumatlar(Contact*& contacts, int& size, int index); 

void changeArrEditDelete(char* arr, int index, int size);
void AllNames(Contact*& contacts, int& size);
void changeColor(int i);
void DeleteContact(Contact*& contacts, int& size, int index);
void EditContact(Contact*& contacts, int size, int index);