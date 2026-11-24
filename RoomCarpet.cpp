
#include "RoomCarpet.h"

// Constructor
RoomCarpet::RoomCarpet(const RoomDimension& room,
    double price)
    : roomSize(room), carpetPrice(price)
{
}

// Calculate total carpet cost
double RoomCarpet::getTotalCost() const
{
    return roomSize.getArea() * carpetPrice;
}

// Return carpet price per square foot
double RoomCarpet::getCarpetPrice() const
{
    return carpetPrice;
}
