//
//  Objects.cpp
//  Final Project
//
//  Created by Evan Matoske on 12/6/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#include "Objects.hpp"

std::string Objects::getName()
{
    return name;
}
void Objects::setName(std::string x)
{
    name = x;
}
int Objects::getNum()
{
    return num;
}
void Objects::setNum(int x)
{
    num = x;
}