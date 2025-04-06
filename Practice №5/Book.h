#pragma once

#include <iostream>
#include "interfaces.h"

class Book : public IPriceable, public IDiscountable
{
private:
	double price;

public:

	void SetPrice(double price) override
	{
		this->price = price;
		std::cout << "Book price set to: " << price << "\n";
	}

	void ApplyDiscount(std::string discount) override
	{
		std::cout << "Book discount applied: " << discount << "\n";
	}

	void ApplyPromocode(std::string promocode) override
	{
		std::cout << "Book promocode applied: " << promocode << "\n";
	}
};
