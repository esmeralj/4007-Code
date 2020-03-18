#include <iostream>
#include <vector>
#include <string>
#include "iven.cpp"
class inventory
{
public:
    inventory();

    std::vector <item*> Inventory;

    unsigned int itemNumber;
    unsigned int maxSize;
    unsigned int numItemsHeld;

    void addArmor( int itemClass, int itemID );
    void addConsumable( int itemClass, int itemID );
    void addItem( int itemType, int itemClass, int itemID );
    void addQuestItem( int itemClass, int itemID );
    void addWeapon( int itemClass, int itemID );
    void removeItem( unsigned short int b );
};
















}





