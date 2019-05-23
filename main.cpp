
#include <iostream>
#include "menu.h"
#include"login.h"

using namespace std;

int main()
{
	login l;
	l.LoginDetails();
	l.Screen();
	menu m;
	m.DisplayMenu();             
	OrderManager o;
	o.GetMenu();
	

}

