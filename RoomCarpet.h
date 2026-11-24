#pragma once

#ifndef ROOMCARPET_H
#define ROOMCARPET_H

#include "RoomDimension.h"

class RoomCarpet
{
private:
    RoomDimension roomSize;
    double carpetPrice;

public:
    RoomCarpet(const RoomDimension& room,
        double price);

    double getTotalCost() const;
    double getCarpetPrice() const;
};

#endif
