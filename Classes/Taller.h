#pragma once
#include <iostream>
#include "Event.h"
using namespace std;

class Taller : public Event
{
public:
    Taller(string ubicacion, string tema, int duracion);
};