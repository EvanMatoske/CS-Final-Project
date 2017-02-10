//
//  SpaceShip.cpp
//  Final Project
//
//  Created by Evan Matoske on 12/5/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#include "SpaceShip.hpp"




SpaceShip::SpaceShip()
{
    

    c.down = &s;
    s.up = &c;
    s.down = &er;
    s.left = &s2;
    s.right = &s3;
    s2.right = &s;
    s3.left = &s;
    er.up = &s;
    current_loc = &c;
    Objects fl;
    fl.setNum(1);
    fl.setName("Fuel Line");
    Objects key;
    key.setNum(2);
    key.setName("Ignition Key");
    bag.push_back(key);
    s2.setItem(fl);
    s2.setLocation("StoreRoom2");
    s3.setLocation("StoreRoom3");
    er.setEngine(0);
    c.setLaunch(0);
    
  
}
void SpaceShip::moveDown()
{
    if (current_loc->down == NULL)
        std::cout << "Wall" << std::endl;
    else (current_loc = current_loc->down);
}
void SpaceShip::moveUp()
{
    if (current_loc->up == NULL)
        std::cout << "Wall" << std::endl;
    else (current_loc = current_loc->up);
}
void SpaceShip::moveRight()
{
    if (current_loc->right == NULL)
        std::cout << "Wall" << std::endl;
    else (current_loc = current_loc->right);
}
void SpaceShip::moveLeft()
{
    if (current_loc->left == NULL)
        std::cout << "Wall" << std::endl;
        else (current_loc = current_loc->left);
}
void SpaceShip::displayItems()
{
    current_loc->displayItems();
    std::cout << std::endl;
}
void SpaceShip::pickUp()
{
    if (bag.size() > 1)
        std::cout << "Cant pick that up, need to put something down! " << std::endl;
    std::cout << "What item would you like pick up : " << std::endl;
    current_loc->itemsToPickup();
    int choice;
    std::cout << std::endl;
    std::cin >> choice;
    if (choice == 1)
        bag.push_back(current_loc->getItem(choice));
    if (choice == 2)
        bag.push_back(current_loc->getItem(choice));
}
void SpaceShip::putDown()
{
    Objects temp;
    temp = bag.at(0);
    bag.erase(bag.begin() + 0);
    current_loc->setItem(temp);
    
}
void SpaceShip::holding()
{
    if (bag.empty())
        std::cout << "Nothing" << std::endl;
    else if (bag.size() == 1)
        std::cout << bag.front().getName() << std::endl;
    else for (int i = 0; i < bag.size(); i++)
        std::cout << bag[i].getName() << ", " << std::endl;
    
  
}
Objects SpaceShip::repair()
{
    for (int i = 0; i < bag.size(); i++)
    {
        if (bag[i].getNum() == 1)
            {
                Objects temp;
                temp = bag[i];
                bag.pop_back();
                return temp;
            }
        
    }
    Objects k;
    return k;

}
Objects SpaceShip::ignition()
{
    for (int i = 0; i < bag.size(); i++)
        if (bag[i].getNum() == 2)
        {
            Objects temp;
            temp = bag[i];
            bag.pop_back();
            return temp;
        }
    Objects k;
    return k;

}
