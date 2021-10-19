#pragma once
#ifndef MENU_H
#define MENU_H

#include"Command.h"
#include"Info.h"
class Menu
{
public:
	void ShowMenu();
private:
	Processing processing;
	void showMainMenu();
	void showAndHadnleAddStudentMenu();
	void showAndHadnleRemoveStudentMenu();
	void handleUserInput(char user_input);
	void safeHandleUserInput(char user_input);
	void showAndHadnleAddProfessorMenu();
	void showAndHadnleRemoveProfessorMenu();
};

#endif 