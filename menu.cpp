#include "proyectoDiscreta.hpp"

using namespace std;

int menu(){
    int opcion = 0;

    cout << endl;
    cout << endl << "\tBienvenido al centro de operaciones del Juego del Calamar - Edicion SV" <<endl << endl;
    cout << "1) Probabilidad de ser escogidos para el juego del calamar" << endl;
    cout << "2) Ingresar el perfil de tu jugador" << endl;
    cout << "3) Mostrar el perfil registrado" << endl;
    cout << "4) Probabilidad empirica de ganar el juego del calamar." << endl;
    cout << "5) Probabilidad de pasar todos los juegos dependiendo de mis habilidades" << endl;
    cout << "6) Probabilidad de acertar el patron en el juego de los cristales" << endl;
    cout << "7) Salir" << endl;
    cout << "Su opcion: ";
    cin >> opcion; cin.ignore();
    return opcion;
}

int main(void){
    bool continuar = true;
    do{
        switch(menu()){
            case 1: 
            probInicial();
                break;
            case 2: 
            ingresarJugador();
                break;
            case 3: 
            mostrarJugador();                
                break;
            case 4: 
            probEmpirica();   
                break;
            case 5: 
            probEdades();
                break;
            case 6:
            probCristales();
            case 7: 
                continuar = false;
                break;
            default: 
                cout << "Opcion invalida" << endl;
                break;
        }
    }while(continuar);
    
    return 0;
}