#pragma once
#include "RoomDimension.h"

// Constructor
RoomDimension::RoomDimension(const FeetInches& roomLength,
    const FeetInches& roomWidth)
    : length(roomLength), width(roomWidth)
{
}

// Calculate room area in square feet
double RoomDimension::getArea() const
{
    double lengthInFeet = length.getFeet() + length.getInches() / 12.0;

    double widthInFeet = width.getFeet() + width.getInches() / 12.0;

    return lengthInFeet * widthInFeet;
}

// Return room length
FeetInches RoomDimension::getLength() const
{
    return length;
}

// Return room width
FeetInches RoomDimension::getWidth() const
{
    return width;
}

