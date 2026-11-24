#pragma once

#include "Feetlnches.h"

class RoomDimension
{
private:
	FeetInches length;
	FeetInches width;

public:
	RoomDimension(const FeetInches& roomLength,
		const FeetInches& roomWidth);

	double getArea() const;
	FeetInches getLength() const;
	FeetInches getWidth() const;
};