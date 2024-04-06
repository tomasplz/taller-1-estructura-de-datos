#pragma once
#include <iostream>
#include "Asistente.h"
using namespace std;

class SpecialInvit : public Asistente {
public:
    SpecialInvit(string nombre, string rut, int edad, string ocupacion, string institucion);
};