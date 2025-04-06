#pragma once

#include <iostream>
#include "interfaces.h"

class Outerwear : public IPriceable, public IDiscountable, public IColorable, public ISizeable
{
private:
	double price;
	unsigned char color;
	unsigned char size;

public:
	void SetPrice(double price) override
	{
		this->price = price;
		std::cout << "Outerwear price set to: " << price << "\n";
	}

	void ApplyDiscount(std::string discount) override
	{
		std::cout << "Outerwear discount applied: " << discount << "\n";
	}

	void ApplyPromocode(std::string promocode) override
	{
		std::cout << "Outerwear promocode applied: " << promocode << "\n";
	}

	void SetColor(unsigned char color) override
	{
		this->color = color;
		std::cout << "Outerwear color set to: " << static_cast<int>(color) << "\n";
	}

	void SetSize(unsigned char size) override
	{
		this->size = size;
		std::cout << "Outerwear size set to: " << static_cast<int>(size) << "\n";
	}
};
