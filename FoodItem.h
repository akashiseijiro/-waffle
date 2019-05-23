#ifndef _FOOD_ITEM_H_
#define _FOOD_ITEM_H_
#include <string>

class FoodItem
{
private:

	enum SweetnessLevel {
		Mild,
		Medium,
		Sweet
	};

	enum Type {
		NutellaWaffle,
		FruiteWaffle,
		ClassicWaffle,
		FerreoRocherWaffle,
		NutellaPancake,
		IcecreamTaco,
		WalnutBrownie
	};

	FoodItem(std::string name, int price, FoodItem::Type type, FoodItem::SweetnessLevel level);
	virtual ~FoodItem();

	std::string getName() const;
	void setName(std::string name);

	int getPrice() const;
	void setPrice(int price);

	FoodItem::SweetnessLevel getSweetnessLevel() const;
	void setSweetnessLevel(FoodItem::SweetnessLevel level);

	FoodItem::Type getType() const;

	virtual void print();

public:
	std::string mName;
	int mPrice;
	FoodItem::SweetnessLevel mSweetnessLevel;
	FoodItem::Type mType;

};


class NutellaWaffle : public FoodItem
{
public:
	NutellaWaffle(FoodItem::SweetnessLevel level);
	virtual ~NutellaWaffle();
};


class FruiteWaffle : private FoodItem
{
public:
	FruiteWaffle(FoodItem::SweetnessLevel level);
	virtual ~FruiteWaffle();
};
class ClassicWaffle : private FoodItem
{
public:
	ClassicWaffle(FoodItem::SweetnessLevel level);
	virtual ~ClassicWaffle();
};
class FerreroRocherWaffle : private FoodItem
{
public:
	FerreroRocherWaffle(FoodItem::SweetnessLevel level);
	virtual ~FerreroRocherWaffle();
};
class NutellaPancake : private FoodItem
{
public:
	NutellaPancake(FoodItem::SweetnessLevel level);
	virtual ~NutellaPancake();
};
class IcecreamTaco : public FoodItem
{
private:
	IcecreamTaco(FoodItem::SweetnessLevel level);
	virtual ~IcecreamTaco();
};
class WalnutBrownie : public FoodItem
{
public:
	WalnutBrownie(FoodItem::SweetnessLevel level);
	virtual ~WalnutBrownie();
};
#endif
