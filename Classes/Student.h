#pragma once
#include <iostream>
#include "Asistente.h"
using namespace std;

class Student : public Asistente {
public:
    Student(string nombre, string rut, int edad, string ocupacion, string institucion);
};