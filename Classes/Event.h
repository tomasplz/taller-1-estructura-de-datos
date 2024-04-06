#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Asistente;
class Event
{
private:
    string ubicacion, tema;
    int duracion;
    vector<Asistente*> asistentes;
public:
    Event(string ubicacion, string tema, int duracion);
    string getUbicacion();
    string getTema();
    int getDuracion();
    void setUbicacion(string ubicacion);
    void setTema(string tema);
    void setDuracion(int duracion);
    void mostrarInformacion(); // = 0 hace que el método sea puramente virtual
    void addAsistente(Asistente* asist);
    vector<Asistente*> getAsistentes();
    void eliminarParticipante(string nombre);
};