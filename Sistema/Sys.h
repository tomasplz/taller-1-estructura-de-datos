#pragma once
#include <iostream>
#include <vector>
#include <limits>
#include "../Classes/Concert.h"
#include "../Classes/Conference.h"
#include "../Classes/Seminario.h"
#include "../Classes/Taller.h"
using namespace std;

class Sys 
{
private:
    vector<Event*> eventos;
public:
    Sys(); // Constructor
    void ejecutar();
    bool loadData();
    bool createNewEvent(Event*&);
    bool registryAssistant(Asistente*);
    bool consultAssistants();
    bool generateInforms();
    bool saveData();
};
