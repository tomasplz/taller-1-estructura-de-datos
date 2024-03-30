#include <iostream>
#include "Evento.h"

bool loadData();
bool createNewEvent();

using namespace std;

int main(){
    int answer;
    cout << "Cargando los datos . . .\n\n\n"<<endl;
    if (loadData())
    {   
        cout << "Bienvenido al gestor de eventos\n"<<endl;
        while (true)
        {
            cout << "1) Crear nuevo evento \n2) Registro asistentes\n3) Consulta asistentes\n4) Generacion de informes"<<endl;
            cin >> answer;
            switch (answer) // TO DO exception when var isnt a int
            {
                case 1:
                    createNewEvent();
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    cout << "este es el 3" << endl;
                    break;
                default:
                    cout << "Este dato no esta permitido"<<endl;
                    break;
            }
        }
    }
    else {
        cout << "Ha habido un error al cargar los datos, Finalizando programa."<<endl;
    }
}

bool loadData(){
    return true;
}
bool createNewEvent(){
    return true;
}