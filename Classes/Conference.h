#pragma once
#include <iostream>
#include "Event.h"
using namespace std;

class Conference : public Event{
public:
    Conference(string ubicacion, string tema, int duracion);
};