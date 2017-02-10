//
//  SpaceShip.hpp
//  Final Project
//
//  Created by Evan Matoske on 12/5/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#ifndef SpaceShip_hpp
#define SpaceShip_hpp
#include "Spaces.hpp"
#include <stdio.h>
#include <iostream>

class SpaceShip
{
public:
    SpaceShip();
    
   
    Space *current_loc;
    Cockpit c;
    StoreRoom s;
    StoreRoom s2;
    StoreRoom s3;
    EngineRoom er;
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void displayItems();
    std::vector<Objects> bag;
    void pickUp();
    void putDown();
    void holding();
    Objects repair();
    Objects ignition();
    
};

#endif /* SpaceShip_hpp */
