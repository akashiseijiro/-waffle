
#include <iostream>
#include "menu.h"
#include"login.h"

using namespace std;

int main()
{
	login l;
	l.login_details();
	l.screen();
	menu m;
	m.display_menu();             
	order_manager o;
	o.get_menu();
	

}

