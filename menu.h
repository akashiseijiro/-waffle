#ifndef MENU_H
#define MENU_H
#include<string>
class menu
{
public:
	menu();
	void DisplayMenu();                     //to display menu
	
};
class OrderManager: public menu
{
	protected:
		int   ch, mtotal=0, mClassic, mNutella, mFruit, mFerrero, mPancake, mTaco, mBrownie;      // using them to store price
		std::string y,ye;
		
	public:
		void GetMenu();
	        void PrintBill();
};

#endif
