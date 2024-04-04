#pragma once
#include "Event.h"
#include <iostream>
using namespace std;

class Concert : public Event
{
public:
    Concert(string ubicacion, string tema, int duracion);
};