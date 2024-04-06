#include "Asistente.h"
#include "Event.h"

Asistente::Asistente(string name, string rut, int age, string ocupacion, string institucion) {this->name = name;this->rut = rut;this->age = age;this->ocupacion = ocupacion;this->institucion = institucion;}
string Asistente::getName() {return this->name;}
string Asistente::getRut() {return this->rut;}
int Asistente::getAge() {return this->age;}
string Asistente::getOcupacion() {return this->ocupacion;}
string Asistente::getInstitucion() {return this->institucion;}
void Asistente::setName(string name) {this->name = name;}
void Asistente::setRut(string rut) {this->rut = rut;}
void Asistente::setAge(int age) {this->age = age;}
void Asistente::setOcupacion(string ocupacion) {this->ocupacion = ocupacion;}
void Asistente::setInstitucion(string institucion) {this->institucion = institucion;}
void Asistente::addEvent(Event* event) {
    eventList.push_back(event);
}
void Asistente::printEventList() {
    for (int i = 0; i < eventList.size(); i++) {
        Event* event = eventList[i];
        cout << i + 1 << ". " << "Event Ubicacion: " << event->getUbicacion() << endl;
        cout << "Event Tema: " << event->getTema() << endl;
        cout << "Event Duracion: " << event->getDuracion() << endl;
        cout << "----------------------" << endl;
    }
}
void Asistente::showInformation() {
    cout << "Name: " << name << endl;
    cout << "Rut: " << rut << endl;
    cout << "Age: " << age << endl;
    cout << "Occupation: " << ocupacion << endl;
    cout << "Institution: " << institucion << endl;
    cout << "Events: " << endl;
    printEventList();
}
