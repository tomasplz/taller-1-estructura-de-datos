#pragma once
#include <iostream>
#include <vector>
#include <limits>
#include <fstream>
#include "../Classes/EventFactory.h"
#include "../Classes/AsistenteFactory.h"
using namespace std;

class Sys 
{
private:
    vector<Event*> eventos;
    vector<Asistente*> asistentes;
    void EventsInfo();
    void printOcupationList();
public:
    Sys(); // Constructor
    void ejecutar();
    bool loadData();
    bool createNewEvent(Event*&);
    bool registryAssistant(Asistente*);
    void consultAssistants();
    bool generateInforms();
    bool saveData();
};
