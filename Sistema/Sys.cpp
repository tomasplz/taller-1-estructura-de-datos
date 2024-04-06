#include "Sys.h"
using namespace std;

bool loadData();
bool createNewEvent(Event*& event); // Define the type of the parameter "event"
bool registryAssistant(Asistente* asist);
void consultAssistants();
bool generateInforms();
bool saveData();
void EventsInfo(); // Define the function informacionEventos()
void printOcupationList(); // Define the function listaOcupaciones()

Sys::Sys(){};
void Sys::ejecutar(){
    int answer;
    bool var = true;
    cout << "Cargando los datos . . .\n\n\n"<<endl;
    if (!loadData()){
        cout << "Ha habido un error al cargar los datos, Finalizando programa."<<endl;
    }
    else
    {   
        Event* evento = nullptr;
        Asistente* asistente = nullptr;
        cout << "Bienvenido al gestor de eventos\n"<<endl;
        while (var)
        {
            cout << "1) Crear nuevo evento \n2) Registro asistentes\n3) Consulta asistentes\n4) Generacion de informes"<<endl;
            cin >> answer;
            if (cin.fail()) {
                cin.clear(); // limpia el estado de error
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // vacía el búfer de entrada
                answer = 0; // establece una respuesta predeterminada que llevará al caso default
            }
            switch (answer) // TO DO exception when var isnt a int
            {
                case 1:
                    if(createNewEvent(evento)){cout << "evento creado con exito"<<endl;};
                    break;
                case 2:
                    if (registryAssistant(asistente)){cout << "Asistente registrado con exito"<<endl;};
                    break;
                case 3:
                    consultAssistants();
                    break;
                case 4:
                    generateInforms();
                    break;
                case 5:
                    if (saveData())
                    {
                        var = false;
                    };
                    break;
                default:
                    cout << "Este dato no esta permitido"<<endl;
                    break;
            }
        }
    }
};

bool Sys::loadData(){
}

bool Sys::createNewEvent(Event*& event){ //
    int eventType;
    cout << "Seleccione el tipo de evento:\n";
    cout << "1) Concert\n2) Conference\n3) Seminario\n4) Taller" <<endl;
    cin >> eventType;
    cin.ignore();
    EventFactory eventFactory;
    event = eventFactory.createEvent(eventType);
    if (event == nullptr) {
        cout << "Error al crear el evento." << endl;
        return false;
    }

    eventos.push_back(event);
    EventsInfo();
    return true;
}
void Sys::EventsInfo(){
    int cont = 0;
    cout << "Lista de eventos:\n";
    for (const auto& event : eventos) {
        cont+=1;
        cout << "EVENTO NUMERO " << (cont) << endl;
        event->mostrarInformacion();
    }
}

void Sys::printOcupationList(){
    cout << "Lista de ocupaciones:\n";
    cout << "1) Estudiante\n2) Invitado Especial\n3) Profesional\n";
}

bool Sys::registryAssistant(Asistente* asist){ //
    string nombre, rut, ocupacion, institucion;
    int edad;
    cin.ignore();
    cout << "Ingrese el nombre del asistente: "; getline(cin, nombre);
    cout << "Ingrese el rut del asistente: "; getline(cin, rut);
    cout << "Ingrese la edad del asistente: "; cin >> edad;
    cin.ignore();
    printOcupationList();
    cout << "Ingrese la ocupacion del asistente: "; getline(cin, ocupacion);
    cout << "Ingrese la institucion del asistente: "; getline(cin, institucion);
    AsistenteFactory asistenteFactory;
    asist = asistenteFactory.createAsistente(nombre, rut, edad, ocupacion, institucion);
    if (asist == nullptr) {
        cout << "Error al crear el asistente." << endl;
        return false;
    }
    int eventIndex = 0;
    cout << "Ingrese el índice del evento al que desea agregar el asistente: ";
    EventsInfo();
    cin >> eventIndex;
    eventIndex-=1;
    cout << "Event index" << eventIndex << endl;
    if (eventIndex >= 0 && eventIndex < eventos.size()) {
        eventos[eventIndex]->addAsistente(asist);
        asist->addEvent(eventos[eventIndex]);
        asistentes.push_back(asist);
        return true;
    } else {
        cout << "Índice de evento no válido. No se ha agregado el asistente al evento." << endl;
        return false;
    }
}

void Sys::consultAssistants(){
    cout << "Lista de asistentes:\n";
    cout << asistentes.size() << "es el tamano" << endl;
    for (const auto& asistente : asistentes) {
        asistente->showInformation();
    }
}

bool Sys::generateInforms(){ //
    return true;
}
bool Sys::saveData(){ //
    ofstream outputFile("data.txt");
    if (!outputFile.is_open()) {
        cout << "Error al abrir el archivo de datos." << endl;
        return false;
    }

    for (const auto& event : eventos) {
        outputFile << "Evento:" << event->getUbicacion() << endl;
        outputFile << "Tipo:" << event->getTema() << endl;
        outputFile << "Fecha:" << event->getDuracion() << endl;
        for (const auto& asistente : event->getAsistentes()) {
            outputFile << "Asistente" << endl;
            outputFile << "Nombre: " << asistente->getName() << endl;
            outputFile << "Rut:" << asistente->getRut() << endl;
            outputFile << "Edad:" << asistente->getAge() << endl;
            outputFile << "Ocupación:" << asistente->getOcupacion() << endl;
            outputFile << "Institución:" << asistente->getInstitucion() << endl;
        }
        outputFile << endl;
    }

    outputFile.close();
    return true;
}