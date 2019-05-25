#include<iostream>
#include"login.h"
#include<conio.h>

using namespace std;

void login::LoginDetails()

{
	long userId; //for user id of administrator

d:
	std::cout << "\n\n\n\n\n\n\n\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^---------------------^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	std::cout << "\n\t\t\t\t\t\t\tEnter Login Id = ";
	std::cin >> userId;
	std::cout << "\t\t\t\t\t\t\t---------------------";
	if (userId != 1353)
	{
		std::cout << "\nDon't try to be smart.....Enter correct id\n";
		goto d;
	}
	else
	{
		std::cout << "\n\n\n\t\t\t\t\t\t\tHello #waffles,\n";
	}
z:
	string pwd = "pass";  //password
	string pass = "";  //empty string
	char c;
	std::cout << "\n\n\n\t\t\t\t\t\t\tPassword = ";
p:
	c = _getch();
	std::cout << "*";   //for printing * instead for password
	if (c != 13)
	{
		pass = pass + c;  //for concatenating the string
		goto p;
	}

	{
		if (pass == pwd)
		{
			std::cout << "\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to our system\n\n\n";
			system("PAUSE");
			system("CLS");
			
		}
		else
		{
			std::cout << "\nWrong Password\n";
			goto z;
		}
	}
}
void login::Screen()                          // either see menu of logout
{
	int op;
	std::cout << " Welcome to #waffles" << std::endl;
	std::cout << "what do you want to do" << std::endl;
	std::cout << 1 << " Go to Food Menu" << std::endl;
	std::cout << 2 << "here are all items" << std::endl; // to display info on items
	std::cout << 3 << " Logout and exit" << std::endl;
	std::cin >> op;
	
	switch (op)
	{
	case 1:
		std::cout << "here is the menu" << std::endl;
		break;
	case 2:
		std::cout << "All items" << std::endl;
		break;

	case 3:
		std::cout << "logging out and exiting............ " << std::endl;
		exit(0);
		break;
	default:
		std::cout << "Oops! Wrong menu choice" << std::endl;
		std::cout << "enter proper value";
		break;
		
	}
}

