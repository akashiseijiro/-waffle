#include <string>
#include <iostream>
#ifndef ITEM_H
#define ITEM_H
enum SweetnessLevel{mild,sweet,high,very_high}; // for sweet level
class MenuInfo
{
public:
	void input();
	
};
class mClassicPancake                         // class for item 1
{
public:
	
	std::string Waffle="Classic Waffle";
	int mprice = 99;
	void details();
	
};
class mNutellaWaffle                            // class for item 
{
public:
	
	std::string Waffle = "Nutella Waffle";
	int mprice = 109;
	void details();
	
};
class mFruitWaffle                             // class for item 3
{
public:
	
	std::string Waffle = "Fruit Waffle";
	int mprice = 109;
	void details();
	
};
class mFerrero                                  // class for item 4
{
public:
	
	std::string Waffle = "Ferrero Rocher Waffle";
	int mprice = 129;
	void details();
	
};
class mNutellaPancake                         // class for item 5
{
public:
	
	std::string Waffle = "Nutella Pancake";
	int mprice = 99;
	void details();
	
};
class mIce                                   // class for item 6                       
{
	
public:
	
	std::string Waffle = "Ice Cream Taco";
	int mprice = 129;
	void details();
	
};
class mWalnut                                 // class for item 7
{
public:
	
	std::string Waffle = "Walnut Brownie";
	int mprice = 79;
	void details();
	
};

#endif