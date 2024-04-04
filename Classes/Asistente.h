#pragma once
#include <iostream>
using namespace std;

class Asistente
{
private:
    string name, rut;
    int age;
public:
    Asistente();
    Asistente(string name, string rut, int age);
    string getName();
    string getRut();
    int getAge();
    void setName(string name);
    void setRut(string rut);
    void setAge(int age);
};