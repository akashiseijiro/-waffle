#include "menu.h"
#include <iostream>
using namespace std;
int ch;                                                                                             //for switch
float total;                                                                                       // for bill
enum{classic=99,nutella=109,fruit=109,ferrero=129,pancake=99,ice=109,walnut=79};                  // cost of items
menu::menu()
{
	cout << "welcome to #waffles" << endl;
}
void menu::display()                                                                              //displaying the menu
{
	
	cout << "************************************MENU******************************" << endl;
	cout << 1 << " Classic Waffle ₹" << classic << endl;
	cout << 2 << " Nutella Waffle ₹" << nutella << endl;
	cout << 3 << " Fruit Waffle ₹" << fruit << endl;
	cout << 4 << " Ferrero Rocher Waffle ₹" << ferrero << endl;
	cout << 5 << " Nutella Pancake ₹" << pancake << endl;
	cout << 6 << " Ice Cream Taco ₹" << ice << endl;
	cout << 7 << " Walnut Brownie ₹" << walnut << endl;
	cout << 8 << " End Order " << endl;
	cout << "***********************************************************************" << endl;

}
void menu::menu_list()                                                                            //implementiong switch case and loop
{
	bool again = true;                                                                            // loop parameters
	do
	{
		std::cout << "\tYour choice: ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "you have selected Classic Waffle " << classic;
			total  += classic;
			again = true;
			break;
		case 2:
			cout << "you have selected Nutella Waffle " << nutella;
			total += nutella;
			again = true;
			break;
		case 3:
			cout << "you have Selected Fruit Waffle " << fruit;
			total += fruit;
			again = true;
			break;
		case 4:
			cout << "you have selected Ferrero Rocher Waffle " << ferrero;
			total += ferrero;
			again = true;
			break;
		case 5:
			cout << "you have selected Nutella Pancake " << pancake;
			total += pancake;
			again = true;
			break;
		case 6:
			cout << "you have selected Ice Cream Taco " << ice;
			total += ice;
			again = true;
			break;
		case 7:
			cout << "you have selected Walnut Brownie " << walnut;
			total += walnut;
			again = true;
			break;
		case 8:
			cout<<"thank you here is your bill \n";
			cout << total;

			exit(0);                                                                   // exit function
			break;
		default:
			std::cout << "\tOops! Wrong menu choice.\n";
			cout << "enter proper value";
			break;
		}
	} while (again);                          
}
