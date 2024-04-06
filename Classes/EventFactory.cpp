#include "EventFactory.h"

Event* EventFactory::createEvent(int tipo){
    string ubicacion, tema;
    int duracion;
    if (tipo == 1) {
            cout << "Ingrese la ubicacion del concierto: ";
            getline(cin, ubicacion);
            cout << "Ingrese el tema del concierto: ";
            getline(cin, tema);
            cout << "Ingrese la duracion del concierto: ";
            cin >> duracion;
            cin.ignore();
            cout << "Concierto creado exitosamente\n" << endl;
        return new Concert(ubicacion, tema, duracion);
    }
    else if (tipo == 2) {
        cout << "Ingrese la ubicacion de la conferencia: ";
        getline(cin, ubicacion);
        cout << "Ingrese el tema de la conferencia: ";
        getline(cin, tema);
        cout << "Ingrese la duracion de la conferencia: ";
        cin >> duracion;
        cin.ignore();
        cout << "Conferencia creada exitosamente\n" << endl;
        return new Conference(ubicacion, tema, duracion);
    }
    else if (tipo == 3) {
        cout << "Ingrese la ubicacion del seminario: ";
        getline(cin, ubicacion);
        cout << "Ingrese el tema del seminario: ";
        getline(cin, tema);
        cout << "Ingrese la duracion del seminario: ";
        cin >> duracion;
        cin.ignore();
        cout << "Seminario creado exitosamente\n" << endl;
        return new Seminario(ubicacion, tema, duracion);
    }
    else if (tipo == 4) {
        cout << "Ingrese la ubicacion del taller: ";
        getline(cin, ubicacion);
        cout << "Ingrese el tema del taller: ";
        getline(cin, tema);
        cout << "Ingrese la duracion del taller: ";
        cin >> duracion;
        cin.ignore();
        cout << "Taller creado exitosamente\n" << endl;
        return new Taller(ubicacion, tema, duracion);
    }
    else {
        cout << "Tipo de evento no valido" << endl;
        return nullptr;
    }
};