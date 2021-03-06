#pragma once

#include <iostream>
#include "PersonService.h"

#define ALIVE Date(0,1,1)

class ConsoleUI
{
private:
	static const int NAMEWIDTH = 15, DATEWIDTH = 12, GENDERWIDTH = 8, DESCWIDTH = 40;

	PersonService serv;

	void addPerson();
	void saveMenu();
	void loadMenu();
	void searchMenu();
	void sortMenu();
	void displayPersons();
public:
	void mainMenu();
};