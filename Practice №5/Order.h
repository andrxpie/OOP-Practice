#pragma once

#include "Item.h"
#include <vector>

class Order
{
private:
    std::vector<Item> itemList;

public:
    std::vector<Item> GetItemList()
    {
        return itemList;
    }

    void SetItemList(std::vector<Item> value)
    {
        itemList = value;
    }
};

class OrderManager
{
public:
    void CalculateTotalSum(Order& order);
    void GetItems(Order& order);
    void GetItemCount(Order& order);
    void AddItem(Order& order, Item item);
    void DeleteItem(Order& order, Item item);
    void PrintOrder(Order& order);
    void ShowOrder(Order& order);
};

class OrderDatabaseManager
{
public:
    void Load(Order& order);
    void Save(Order& order);
    void Update(Order& order);
    void Delete(Order& order);
};
