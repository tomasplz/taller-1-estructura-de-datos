#include "AsistenteFactory.h"

Asistente* AsistenteFactory::createAsistente(string nombre, string rut, int edad, string ocupacion, string institucion){
    if (ocupacion == "1") { //Estudiante
    cout << "Estudiante creado" << endl;
        return new Student(nombre, rut, edad, ocupacion, institucion);
    } else if (ocupacion == "2") { //Invitado Especial
    cout << "Invitado Especial creado" << endl;
        return new SpecialInvit(nombre, rut, edad, ocupacion, institucion);
    } else if (ocupacion == "3") { //Profesional
    cout << "Profesional creado" << endl;
        return new Professional(nombre, rut, edad, ocupacion, institucion);
    } else {
        return nullptr;
    }
}