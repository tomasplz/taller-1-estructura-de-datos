#pragma once
#include <iostream>
#include "Event.h"
using namespace std;


class Seminario : public Event {
public:
    Seminario(string ubicacion, string tema, int duracion);
};