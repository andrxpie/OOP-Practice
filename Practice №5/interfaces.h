#pragma once

#include <string>

__interface IPriceable
{
	void SetPrice(double price);
};

__interface IDiscountable
{
	void ApplyDiscount(std::string discount);
	void ApplyPromocode(std::string promocode);
};

__interface IColorable
{
	void SetColor(unsigned char color);
};

__interface ISizeable
{
	void SetSize(unsigned char size);
};
