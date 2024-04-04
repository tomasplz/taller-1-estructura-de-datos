#include "Sys.h"

bool loadData();
bool createNewEvent(Event*& event); // Define the type of the parameter "event"
bool registryAssistant(Asistente* asist);
bool consultAssistants();
bool generateInforms();
bool saveData();

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
    return true;
}

bool Sys::createNewEvent(Event*& event){
    return true;
}

bool Sys::registryAssistant(Asistente* asist){
    return true;
}
bool Sys::consultAssistants(){
    return true;
}
bool Sys::generateInforms(){
    return true;
}
bool Sys::saveData(){
    return true;
}