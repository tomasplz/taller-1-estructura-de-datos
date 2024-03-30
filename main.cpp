#include <iostream>
#include "../Classes/Evento.h"

bool loadData();
bool createNewEvent();
bool registryAssistant();
bool consultAssistants();
bool generateInforms();
bool saveData();

using namespace std;

int main(){
    int answer;
    bool var = true;
    cout << "Cargando los datos . . .\n\n\n"<<endl;
    if (!loadData()){
        cout << "Ha habido un error al cargar los datos, Finalizando programa."<<endl;
    }
    else
    {   
        cout << "Bienvenido al gestor de eventos\n"<<endl;
        while (var)
        {
            cout << "1) Crear nuevo evento \n2) Registro asistentes\n3) Consulta asistentes\n4) Generacion de informes"<<endl;
            cin >> answer;
            switch (answer) // TO DO exception when var isnt a int
            {
                case 1:
                    createNewEvent();
                    break;
                case 2:
                    registryAssistant();
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
}

bool loadData(){
    return true;
}
bool createNewEvent(){
    return true;
}

bool registryAssistant(){
    return true;
}

bool consultAssistants(){
    return true;
}

bool generateInforms(){
    return true;
}

bool saveData(){
    return true;
}