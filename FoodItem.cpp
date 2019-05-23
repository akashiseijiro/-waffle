#include "FoodItem.h"


FoodItem::FoodItem(std::string name,
	int price,
	FoodItem::Type type,
	FoodItem::SweetnessLevel level) : mName(name), mPrice(price), mType(type), mSweetnessLevel(level)
{


}
FoodItem::~FoodItem()
{

}

std::string FoodItem::getName() const
{
	return mName;
}

void FoodItem::setName(std::string name)
{
	mName = name;
}

int FoodItem::getPrice() const
{
	return mPrice;
}
void FoodItem::setPrice(int price)
{
	mPrice = price;
}

FoodItem::SweetnessLevel FoodItem::getSweetnessLevel() const
{
	return mSweetnessLevel;
}

void FoodItem::setSweetnessLevel(FoodItem::SweetnessLevel level)
{
	mSweetnessLevel = level;
}

FoodItem::Type FoodItem::getType() const
{
	return mType;
}

void FoodItem::print()
{
	//TODO
	//Print food item details
}


NutellaWaffle::NutellaWaffle(FoodItem::SweetnessLevel level)
	:FoodItem("Nutella Waffle", 109, FoodItem::NutellaWaffle, level)
{

}
NutellaWaffle::~NutellaWaffle()
{

}

FruiteWaffle::FruiteWaffle(FoodItem::SweetnessLevel level)
	:FoodItem("Fruit Waffle", 109, FoodItem::FruiteWaffle, level)
{

}
FruiteWaffle::~FruiteWaffle()
{

}

FerreroRocherWaffle::FerreroRocherWaffle(FoodItem::SweetnessLevel level)
	:FoodItem("Ferrero Rocher Waffle", 129, FoodItem::FerreoRocherWaffle, level)
{

}
FerreroRocherWaffle::~FerreroRocherWaffle()
{

}
NutellaPancake::NutellaPancake(FoodItem::SweetnessLevel level)
	:FoodItem("Nutella Pancake", 99, FoodItem::NutellaPancake, level)
{

}
NutellaPancake::~NutellaPancake()
{

}
IcecreamTaco::IcecreamTaco(FoodItem::SweetnessLevel level)
	:FoodItem("Ice cream Taco", 129, FoodItem::IcecreamTaco, level)
{

}
IcecreamTaco::~IcecreamTaco()
{

}
WalnutBrownie::WalnutBrownie(FoodItem::SweetnessLevel level)
	:FoodItem("Walnut Brownie", 79, FoodItem::WalnutBrownie, level)
{

}
WalnutBrownie::~WalnutBrownie()
{

}