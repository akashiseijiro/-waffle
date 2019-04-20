#include<iostream>
#include"login.h"
#include<conio.h>

using namespace std;

void login::login_details()

{
	long userId; //for user id of administrator

d:
	cout << "\n\n\n\n\n\n\n\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^---------------------^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	cout << "\n\t\t\t\t\t\t\tEnter Login Id = ";
	cin >> userId;
	cout << "\t\t\t\t\t\t\t---------------------";
	if (userId != 1353)
	{
		cout << "\nDon't try to be smart.....Enter correct id\n";
		goto d;
	}
	else
	{
		cout << "\n\n\n\t\t\t\t\t\t\tHello #waffles,\n";
	}
z:
	string pwd = "pass";  //password
	string pass = "";  //empty string
	char c;
	cout << "\n\n\n\t\t\t\t\t\t\tPassword = ";
p:
	c = _getch();
	cout << "*";   //for printing * instead for password
	if (c != 13)
	{
		pass = pass + c;  //for concatenating the string
		goto p;
	}

	{
		if (pass == pwd)
		{
			cout << "\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to our system\n\n\n";
			system("PAUSE");
			system("CLS");
			
		}
		else
		{
			cout << "\nWrong Password\n";
			goto z;
		}
	}
}
void login::screen()                          // either see menu of logout
{
	int op;
	cout << " Welcome to #waffles" << endl;
	cout << "what do you want to do" << endl;
	cout << 1 << " Go to Food Menu" << endl;
	cout << 2 << "here are all items" << endl; // to display info on items
	cout << 3 << " Logout and exit" << endl;
	cin >> op;
	
	switch (op)
	{
	case 1:
		cout << "here is the menu" << endl;
		break;
	case 2:
		cout << "All items" << endl;
		break;

	case 3:
		cout << "logging out and exiting............ " << endl;
		exit(0);
		break;
	default:
		cout << "Oops! Wrong menu choice" << endl;
		cout << "enter proper value";
		break;
		
	}
}
