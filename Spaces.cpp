//
//  Spaces.cpp
//  Final Project
//
//  Created by Evan Matoske on 12/4/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#include "Spaces.hpp"
//Cockpit
Cockpit::Cockpit()
{
    setLocation("Cockpit");
	up = NULL;
	down = NULL;
	left = NULL;
	right = NULL;	

}
void Cockpit::special(Objects x)
{
    if (x.getNum() == 2)
    {
        std::cout << "Launch succesful!" << std::endl;
        setLaunch(1);
    }
    
}
int Cockpit::getLaunch()
{
    return launch;
}
void Cockpit::setLaunch(int x)
{
    launch = x;
}
std::string Cockpit::getLocation()
{
    return location;
}
void Cockpit::setLocation(std::string x)
{
    location = x;
}

void Cockpit::displayItems()
{
    if (items.size() == 0)
        std::cout << getLocation() << " Empty " << std::endl;
    for (int i = 0; i < items.size(); i++)
        std::cout << "Items in room : " << items[i].getNum();
}
void StoreRoom::itemsToPickup()
{
    if (items.size() == 0)
        std::cout << getLocation() << " Empty " << std::endl;
    for (int i = 0; i < items.size(); i++)
        std::cout << i + 1 << " : " << items[i].getName();
}
Objects Cockpit::getItem(int x)
{
    Objects temp;
    
    temp = items.at(x-1);
    items.erase(items.begin() + (x-1));
    return temp;
    
}
void Cockpit::setItem(Objects x)
{
    items.push_back(x);
}
void Cockpit::roomMenu()
{
    std::cout << "1 = up" << std::endl
    << "2 = left" << std::endl
    << "3 = right" << std::endl
    << "4 = down  " << std::endl
    << "5 = launch " << std::endl;
}

//StoreRoom
StoreRoom::StoreRoom()
{
    setLocation("StoreRoom");
	up = NULL;
	down = NULL;
	left = NULL;
	right = NULL;
}
std::string StoreRoom::getLocation()
{
    return location;
}
void StoreRoom::setLocation(std::string x)
{
    location = x;
}
void StoreRoom::special(Objects x)
{
    std::cout << "Fuel Line in room store room 2" << std::endl;
}
void StoreRoom::displayItems()
{
    if (items.size() == 0)
        std::cout << getLocation() << " Empty " << std::endl;
        for (int i = 0; i < items.size(); i++)
            std::cout << "Items in room : " << items[i].getName();
    
}
void Cockpit::itemsToPickup()
{
    if (items.size() == 0)
        std::cout << getLocation() << " Empty " << std::endl;
    for (int i = 0; i < items.size(); i++)
        std::cout << i << " : " << items[i].getName();
}
Objects StoreRoom::getItem(int x)
{
    Objects temp;
    
    temp = items.at(x-1);
    items.erase(items.begin() + (x-1));
    return temp;

}
void StoreRoom::setItem(Objects x)
{
    items.push_back(x);
}
void StoreRoom::roomMenu()
{
    std::cout << "1 = up    "
    
    << "5 = display items in room" << std::endl
    
    << "2 = left  "
    
    << "6 = pick up item " << std::endl
    
    << "3 = right "
    
    << "7 = place item" << std::endl
    
    << "4 = down  " << std::endl
    
    << "8 = hint" << std::endl;
}

//EngineRoom
EngineRoom::EngineRoom()
{
    setLocation("EngineRoom");
	up = NULL;
	down = NULL;
	right = NULL;
	left = NULL;
}
std::string EngineRoom::getLocation()
{
    return location;
}
void EngineRoom::setLocation(std::string x)
{
    location = x;
}
void EngineRoom::special(Objects x)
{
    if (x.getNum() == 1)
    {
        std::cout << "Engine Repaired! " << std::endl;
        setEngine(1);
    }
    else std::cout << "Fuel Line needed for repair!" << std::endl;
}

void EngineRoom::displayItems()
{
    if (items.size() == 0)
        std::cout << getLocation() << " Empty " << std::endl;
    else
        for (int i = 0; i < items.size(); i++)
            std::cout << i << " : " << items[i].getName();
}
void EngineRoom::itemsToPickup()
{
    if (items.size() == 0)
        std::cout << getLocation() << " Empty " << std::endl;
    for (int i = 0; i < items.size(); i++)
        std::cout << i << " : " << items[i].getName();
}
Objects EngineRoom::getItem(int x)
{
    Objects temp;
    
    temp = items.at(x-1);
    items.erase(items.begin() + (x-1));
    return temp;

}
void EngineRoom::setItem(Objects x)
{
    items.push_back(x);
}
void EngineRoom::roomMenu()
{
    std::cout << "1 = up    "
    << std::endl << "2 = left  "
    << std::endl << "3 = right "
    << std::endl << "4 = down  "
    << std::endl << "5 = repair engine " << std::endl;
}  
void EngineRoom::setEngine(int x)
{
    engine = x;
}
int EngineRoom::getEngine()
{
    return engine;
}

