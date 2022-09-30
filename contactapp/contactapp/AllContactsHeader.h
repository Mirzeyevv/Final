#pragma once
#include "MenuHeader.h"
#include "AddHeader.h"
#include <Windows.h>
using namespace std;

enum Color {

    Red = 4,
    White = 15
};



void AllMelumatlar(Contact*& contacts, int& size, int index); 
void changeArrEditDelete(char* arr, int index, int size);
void AllNames(Contact*& contacts, int& size);
void changeColor(int i);
