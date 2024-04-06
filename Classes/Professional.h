#pragma once
#include <iostream>
#include "Asistente.h"
using namespace std;

class Professional : public Asistente {
public:
    Professional(string nombre, string rut, int edad, string ocupacion, string institucion);
};