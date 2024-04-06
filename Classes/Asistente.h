#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Event;
class Asistente
{
private:
    string name, rut, ocupacion, institucion;
    int age;
    vector<Event*> eventList;
    void printEventList();
public:
    Asistente(string name, string rut, int age, string ocupacion, string institucion);
    void addEvent(Event* event);
    string getName();
    string getRut();
    int getAge();
    string getOcupacion();
    string getInstitucion();
    void setName(string name);
    void setRut(string rut);
    void setAge(int age);
    void setOcupacion(string ocupacion);
    void setInstitucion(string institucion);
    void showInformation(); //Ver si hay que borrar
};