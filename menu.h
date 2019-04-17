#ifndef MENU_H
#define MENU_H
#include<string>
class menu
{
public:
	menu();
	void display_menu();                     //to display menu
	
};
class order_manager: public menu
{
	protected:
		int   ch, mtotal=0, ma, mb, mc, md, me, mf, mg, mh, mi, mj, mk;
		std::string y,ye;
		
	public:
		void get_menu();
		virtual ~order_manager();
};

#endif
