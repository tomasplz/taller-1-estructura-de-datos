#include "Asistente.h"

Asistente::Asistente(){};
Asistente::Asistente(string name, string rut, int age){this->name = name; this->rut = rut; this->age = age;};
string Asistente::getName(){return this->name;};
string Asistente::getRut(){return this->rut;};
int Asistente::getAge(){return this->age;};
void Asistente::setName(string name){this->name=name;};
void Asistente::setRut(string rut){this->rut=rut;};
void Asistente::setAge(int age){this->age=age;};
