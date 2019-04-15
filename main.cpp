
#include <iostream>
#include "menu.h"
#include"login.h"
#include"item.h"
using namespace std;

int main()
{
	login l;
	l.login_details();
	l.screen();
	MenuInfo a;
	a.input();
	mClassicPancake b;
	b.details();
	mNutellaWaffle c;
	c.details();
	mFruitWaffle D;
	D.details();
	mFerrero h;
	h.details();
	mNutellaPancake n;
	n.details();
	mIce I;
	I.details();
	mWalnut W;
	W.details();
	menu m;
	m.display_menu();             
	order_manager o;
	o.menu_list();
	order B;
	B.bill();

}

