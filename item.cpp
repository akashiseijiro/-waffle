#include"item.h"
#include<iostream>
void MenuInfo::input()
{
	std::cout << "here are the details of each item \n ";
	std::cout << " sweetness:- mild=0 ;sweet=1;high=2;very high=3 \n ";
}
void mClassicPancake::details()                                                                    // details of all items
{
	std::cout << Waffle << " " << mprice << " sweetness level: " << sweet << std::endl;
}
void mNutellaWaffle::details()
{
	std::cout << Waffle << " Price RS " << mprice << " sweetness level: " << sweet<< std::endl;
}
void mFruitWaffle::details()
{
	std::cout << Waffle << "  Price RS " << mprice << " Sweetness level: " << mild << std::endl;
}

void mFerrero::details()
{
	std::cout << Waffle << "  Price rs  " << mprice << " Sweetness level: " << high << std::endl;
}

void mNutellaPancake::details()
{
	std::cout << Waffle << "  Price rs  " << mprice << " Sweetness level: " << high << std::endl;
}

void mIce::details()
{
	std::cout << Waffle << "  Price RS " << mprice << " Sweetness level: " << very_high << std::endl;
}
void mWalnut::details()
{
	std::cout << Waffle << "  Price RS " << mprice << " Sweetness level: " << sweet << std::endl;
}

