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
	std::cout << "**********************************************************************" << std::endl;
}
void menu::DisplayMenu()                                                                              //displaying the menu
{
	
	std::cout << "************************************MENU******************************" << std::endl;
	std::cout << 1 << " Classic Waffle Rs" << classic << std::endl;
	std::cout << 2 << " Nutella Waffle Rs" << nutella << std::endl;
	std::cout << 3 << " Fruit Waffle Rs" << fruit << std::endl;
	std::cout << 4 << " Ferrero Rocher Waffle Rs" << ferrero << std::endl;
	std::cout << 5 << " Nutella Pancake Rs" << pancake << std::endl;
	std::cout << 6 << " Ice Cream Taco Rs" << ice << std::endl;
	std::cout << 7 << " Walnut Brownie Rs" << walnut << std::endl;
	std::cout << 8 << " End Order " << std::endl;
	std::cout << "***********************************************************************" << std::endl;

}
void OrderManager::GetMenu()
{
	ofstream write;                                                                                  // write into file
	write.open("order.text");                                                                        // open order.txt
	if (!write)
	{
		std::cout << "file can not open" << std::endl;
		exit(-1);
	}

mClassic:
mNutella:
mFruit:
	std::cout << "\n\n\tENTER YOUR ORDER (one order at a time): ";
	std::cin >> ch;


	std::cout << "\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";

	std::cin >> ye;

	if (ye == "y" || ye == "Y")
	{
		goto mClassic;
	}
	else
	{
		switch (ch)
		{
		case 1:
			std::cout << "You have ordered Classic Waffle" << std::endl;


			mClassic = 99;
			mtotal = mtotal + mClassic;
			write << "YOU ORDER  Classic Waffle : 99";
			write << " \n";
			write << "\n";
			std::cout << "\n\n\n\tYOU ORDER  Classic Waffle " << std::endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << std::endl;
			break;
		case 2:
			std::cout << "You have ordered Nutella Waffle" << std::endl;


			mNutella = 109;
			mtotal = mtotal + mNutella;
			write << "YOU ORDER  Nutella Waffle : 109";
			write << " \n";
			write << "\n";
			std::cout << "\n\n\n\tYOU ORDER  Nutella Waffle " << std::endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << std::endl;
			break;
		case 3:
			std::cout << "You have ordered Fruit Waffle" << std::endl;


			mFruit = 109;
			mtotal = mtotal + mFruit;
			write << "YOU ORDER  Fruit Waffle : 109";
			write << " \n";
			write << "\n";
			std::cout << "\n\n\n\tYOU ORDER  Fruit Waffle " << std::endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << std::endl;
			break;
		case 4:
			std::cout << "You have ordered Ferrero Rocher Waffle" << std::endl;


			mFerrero = 129;
			mtotal = mtotal + mFerrero;
			write << "YOU ORDER  Ferrero Rocher Waffle : 129";
			write << " \n";
			write << "\n";
			std::cout << "\n\n\n\tYOU ORDER  Ferrero Rocher Waffle " << std::endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << std::endl;
			break;
		case 5:
			std::cout << "You have ordered Nutella Pancake" << std::endl;


			mPancake = 99;
			mtotal = mtotal + mPancake;
			write << "YOU ORDER  Nutella Pancake : 99";
			write << " \n";
			write << "\n";
			std::cout << "\n\n\n\tYOU ORDER  Nutella Pancake " << std::endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << std::endl;
			break;
		case 6:
			std::cout << "You have ordered Icecream Taco" << std::endl;


			mTaco = 129;
			mtotal = mtotal + mTaco;
			write << "YOU ORDER  Icecream Taco : 129";
			write << " \n";
			write << "\n";
			std::cout << "\n\n\n\tYOU ORDER  Icecream Taco " << std::endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << std::endl;
			break;
		case 7:
			std::cout << "You have ordered Walnut Brownie" << std::endl;


			mBrownie = 79;
			mtotal = mtotal + mBrownie;
			write << "YOU ORDER  Walnut Brownie : 79";
			write << " \n";
			write << "\n";
			std::cout << "\n\n\n\tYOU ORDER  Walnut Brownie " << std::endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << std::endl;
			break;
		case 8:
			std::cout << "\n\t\t\t\t\t thank you for ordering.........................";
			exit(0);
			break;
		default:
			std::cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << std::endl;

			break;
		}

	}
}
void OrderManager ::PrintBill()                                                 // printing the bill
{
	std::cout << "\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
	std::cin >> y;
	if (y == "yes" || y == "YES")
	{
		goto mClassic;
	}
	else
	{
		std::cout << "\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
		for (int a = 1; a < 8; a++) // Change 'a<?' to how many * you want
		{
			Sleep(500);
			std::cout << "...";
		}
		std::cout << "\n\t\t\t\t\t\t\t";
		system("PAUSE");
	}

	system("cls");
	std::cout << "\n\t\t\t\t\t\t\t ================================================" << std::endl;                    
	std::cout << "\t\t\t\t\t\t\t|               Food Ordering System             |" << std::endl;
	std::cout << "\t\t\t\t\t\t\t ================================================" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\t\t\t\t\t\t\t  Cashier :  Shivi" << std::endl;
	std::cout << std::endl;
	std::cout << "\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs." << mtotal << std::endl;
	std::write << "\t\t\t\t\t\t\t ";
	std::write << "\t\t\t\t\t\t\tTOTAL BILL IS : " << mtotal;
	std::cout << "\n\t\t\t\t\t\t\t ================================================" << std::endl;


	std::write.close();
  }
}


