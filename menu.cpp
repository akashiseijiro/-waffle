﻿#include "menu.h"
#include <iostream>
#include<fstream>
using namespace std;

int ch;                                                                                             //for switch
float total;                                                                                       // for bill
enum{classic=99,nutella=109,fruit=109,ferrero=129,pancake=99,ice=109,walnut=79};                  // cost of items
menu::menu()
{
	cout << "**********************************************************************" << endl;
}
void menu::display_menu()                                                                              //displaying the menu
{
	
	cout << "************************************MENU******************************" << endl;
	cout << 1 << " Classic Waffle Rs" << classic << endl;
	cout << 2 << " Nutella Waffle Rs" << nutella << endl;
	cout << 3 << " Fruit Waffle Rs" << fruit << endl;
	cout << 4 << " Ferrero Rocher Waffle Rs" << ferrero << endl;
	cout << 5 << " Nutella Pancake Rs" << pancake << endl;
	cout << 6 << " Ice Cream Taco Rs" << ice << endl;
	cout << 7 << " Walnut Brownie Rs" << walnut << endl;
	cout << 8 << " End Order " << endl;
	cout << "***********************************************************************" << endl;

}
void order_manager::menu_list()                                                                            //implementiong switch case and loop
{
	bool again = true;                                                                            // loop parameters
	do
	{
		std::cout << "\tYour choice: ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "you have selected Classic Waffle " << classic<<"\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			total  += classic;
			again = true;
			break;
		case 2:
			cout << "you have selected Nutella Waffle " << nutella << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			total += nutella;
			again = true;
			break;
		case 3:
			cout << "you have Selected Fruit Waffle " << fruit << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			total += fruit;
			again = true;
			break;
		case 4:
			cout << "you have selected Ferrero Rocher Waffle " << ferrero << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			total += ferrero;
			again = true;
			break;
		case 5:
			cout << "you have selected Nutella Pancake " << pancake << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			total += pancake;
			again = true;
			break;
		case 6:
			cout << "you have selected Ice Cream Taco " << ice << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			total += ice;
			again = true;
			break;
		case 7:
			cout << "you have selected Walnut Brownie " << walnut << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			total += walnut;
			again = true;
			break;
		case 8:
			cout << "thank you for ordering....................." << " your bill is " << endl;
			cout << total;
			goto order;
		default:
			cout << "Oops! Wrong menu choice." << endl;
			cout << "enter proper value";
			break;
		}
	} while (again);                          
}
void order::bill()
{
	system("cls");
	cout << "\n\t\t\t\t\t\t\t ================================================" << endl;
	cout << "\t\t\t\t\t\t\t|               Food Ordering System             |" << endl;
	cout << "\t\t\t\t\t\t\t ================================================" << endl;
	cout << endl;
	cout << endl;

	cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t  Cashier :  shivi" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs." << total << endl;

	cout << "\n\t\t\t\t\t\t\t ================================================" << endl;


	
}
