#include<iostream>
#include"login.h"
using namespace std;

void login::login_details()

	{
		string userName;
		string userPassword;
		int loginAttempt = 0;

		while (loginAttempt < 5)
		{
			cout << "Please enter your user name: ";
			cin >> userName;
			cout << "Please enter your user password: ";
			cin >> userPassword;

			if (userName == "#waffle" && userPassword == "2707")
			{
				cout << "Welcome Captain"<<endl;
				break;
			}
			else
			{
				cout << "Invalid login attempt. Please try again.\n" << endl;;
				loginAttempt++;
			}
		};
		if (loginAttempt == 5)
		{
			cout << "Too many login attempts! The program will now terminate.";
			exit(0);
		}

		cout << "Thank you for logging in.\n";
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
