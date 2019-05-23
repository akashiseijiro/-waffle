#include "menu.h"
#include <iostream>
#include<fstream>
#include<windows.h>
using namespace std;

int ch;                                                                                             //for switch
float total;                                                                                       // for bill
enum{classic=99,nutella=109,fruit=109,ferrero=129,pancake=99,ice=109,walnut=79};                  // cost of items
menu::menu()
{
	cout << "**********************************************************************" << endl;
}
void menu::DisplayMenu()                                                                              //displaying the menu
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
void OrderManager::GetMenu()
{
	ofstream write;                                                                                  // write into file
	write.open("order.text");                                                                        // open order.txt
	if (!write)
	{
		cout << "file can not open" << endl;
		exit(-1);
	}

mClassic:
mNutella:
mFruit:
	cout << "\n\n\tENTER YOUR ORDER (one order at a time): ";
	cin >> ch;


	cout << "\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";

	cin >> ye;

	if (ye == "y" || ye == "Y")
	{
		goto mClassic;
	}
	else
	{
		switch (ch)
		{
		case 1:
			cout << "You have ordered Classic Waffle" << endl;


			mClassic = 99;
			mtotal = mtotal + mClassic;
			write << "YOU ORDER  Classic Waffle : 99";
			write << " \n";
			write << "\n";
			cout << "\n\n\n\tYOU ORDER  Classic Waffle " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			break;
		case 2:
			cout << "You have ordered Nutella Waffle" << endl;


			mNutella = 109;
			mtotal = mtotal + mNutella;
			write << "YOU ORDER  Nutella Waffle : 109";
			write << " \n";
			write << "\n";
			cout << "\n\n\n\tYOU ORDER  Nutella Waffle " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			break;
		case 3:
			cout << "You have ordered Fruit Waffle" << endl;


			mFruit = 109;
			mtotal = mtotal + mFruit;
			write << "YOU ORDER  Fruit Waffle : 109";
			write << " \n";
			write << "\n";
			cout << "\n\n\n\tYOU ORDER  Fruit Waffle " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			break;
		case 4:
			cout << "You have ordered Ferrero Rocher Waffle" << endl;


			mFerrero = 129;
			mtotal = mtotal + mFerrero;
			write << "YOU ORDER  Ferrero Rocher Waffle : 129";
			write << " \n";
			write << "\n";
			cout << "\n\n\n\tYOU ORDER  Ferrero Rocher Waffle " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			break;
		case 5:
			cout << "You have ordered Nutella Pancake" << endl;


			mPancake = 99;
			mtotal = mtotal + mPancake;
			write << "YOU ORDER  Nutella Pancake : 99";
			write << " \n";
			write << "\n";
			cout << "\n\n\n\tYOU ORDER  Nutella Pancake " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			break;
		case 6:
			cout << "You have ordered Icecream Taco" << endl;


			mTaco = 129;
			mtotal = mtotal + mTaco;
			write << "YOU ORDER  Icecream Taco : 129";
			write << " \n";
			write << "\n";
			cout << "\n\n\n\tYOU ORDER  Icecream Taco " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			break;
		case 7:
			cout << "You have ordered Walnut Brownie" << endl;


			mBrownie = 79;
			mtotal = mtotal + mBrownie;
			write << "YOU ORDER  Walnut Brownie : 79";
			write << " \n";
			write << "\n";
			cout << "\n\n\n\tYOU ORDER  Walnut Brownie " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			break;
		case 8:
			cout << "\n\t\t\t\t\t thank you for ordering.........................";
			exit(0);
			break;
		default:
			cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << endl;
			
			break;
		}

	}

	cout << "\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
	cin >> y;
	if (y == "yes" || y == "YES")
	{
		goto mClassic;
	}
	else
	{
		cout << "\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
		for (int a = 1; a < 8; a++) // Change 'a<?' to how many * you want
		{
			Sleep(500);
			cout << "...";
		}
		cout << "\n\t\t\t\t\t\t\t";
		system("PAUSE");
	}

	system("cls");
	cout << "\n\t\t\t\t\t\t\t ================================================" << endl;                    // printing the bill
	cout << "\t\t\t\t\t\t\t|               Food Ordering System             |" << endl;
	cout << "\t\t\t\t\t\t\t ================================================" << endl;
	cout << endl;
	cout << endl;

	cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t  Cashier :  Shivi" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs." << mtotal << endl;
	write << "\t\t\t\t\t\t\t ";
	write << "\t\t\t\t\t\t\tTOTAL BILL IS : " << mtotal;
	cout << "\n\t\t\t\t\t\t\t ================================================" << endl;


	write.close();
}



