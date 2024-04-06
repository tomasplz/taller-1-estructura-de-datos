#include "Asistente.h"
#include "Event.h"

Event::Event(string ubicacion, string tema, int duracion){this->ubicacion = ubicacion; this->tema = tema; this->duracion = duracion;}
string Event::getUbicacion() {return ubicacion;}
string Event::getTema() {return tema;}
int Event::getDuracion() {return duracion;}
void Event::setUbicacion(string ubicacion){this->ubicacion = ubicacion;}
void Event::setTema(string tema) {this->tema = tema;}
void Event::setDuracion(int duracion) {this->duracion = duracion;}
void Event::mostrarInformacion() {
    cout << "Ubicación: " << ubicacion << endl;
    cout << "Tema: " << tema << endl;
    cout << "Duración: " << duracion << endl;
}

void Event::addAsistente(Asistente* asist) {
    asistentes.push_back(asist);
    cout << "Participante " << asist->getName() << " agregado." << endl;
}

vector<Asistente*> Event::getAsistentes() {
    return asistentes;
}

void Event::eliminarParticipante(string nombre) {
    // Busca y elimina el participante
    for (auto it = asistentes.begin(); it != asistentes.end(); ++it) {
        if ((*it)->getName() == nombre) {
            asistentes.erase(it);
            cout << "Participante " << nombre << " eliminado." << endl;
            return;
        }
    }
    cout << "Participante " << nombre << " no encontrado." << endl;
}
