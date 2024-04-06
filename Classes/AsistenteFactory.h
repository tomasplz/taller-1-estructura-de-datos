#pragma once
#include <iostream>
#include "Student.h"
#include "SpecialInvit.h"
#include "Professional.h"

using namespace std;

class AsistenteFactory {
public:
    Asistente* createAsistente(string nombre, string rut, int edad, string ocupacion, string institucion);};