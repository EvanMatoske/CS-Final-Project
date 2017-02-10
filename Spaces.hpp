//
//  Spaces.hpp
//  Final Project
//
//  Created by Evan Matoske on 12/4/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#ifndef Spaces_hpp
#define Spaces_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "Objects.hpp"
#include "LinkedList.hpp"

class Space
{
public:
    
    Space *up;
    Space *down;
    Space *left;
    Space *right;
    virtual void displayItems() = 0;
    virtual void itemsToPickup() = 0;
    virtual std::string getLocation() =0;
    virtual void setLocation(std::string) = 0;
    virtual void special(Objects) = 0;
    virtual Objects getItem(int) = 0;
    virtual void setItem(Objects) =0;
    virtual void roomMenu() = 0;

    
};

class Cockpit  : public Space
{
public:
    Cockpit();
    void special(Objects);
    std::string getLocation();
    void setLocation(std::string);
    void displayItems();
    void itemsToPickup();
    Objects getItem(int);
    void setItem(Objects);
    void roomMenu();
    void setLaunch(int);
    int getLaunch();
private:
    std::string location;
    std::vector<Objects> items;
    int launch;
};


class StoreRoom : public Space
{
public:
    StoreRoom();
    std::string getLocation();
    void setLocation(std::string);
    void special(Objects);
    void displayItems();
    void itemsToPickup();
    Objects getItem(int);
    void setItem(Objects);
    void roomMenu();
    

   
private:
    std::string location;
    std::vector<Objects> items;
    
};

class EngineRoom : public Space
{
public:
    EngineRoom();
    std::string getLocation();
    void setLocation(std::string);
    void special(Objects);
    void displayItems();
    void itemsToPickup();
    Objects getItem(int);
    void setItem(Objects);
    void roomMenu();
    void setEngine(int);
    int getEngine();
 
    
private:
    std::string location;
    std::vector<Objects> items;
    int engine;
    
};




#endif /* Spaces_hpp */
