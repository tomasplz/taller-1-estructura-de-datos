#pragma once
#include <iostream>
#include "Concert.h"
#include "Conference.h"
#include "Seminario.h"
#include "Taller.h"
using namespace std;

class EventFactory {
public:
    Event* createEvent(int tipo);
};