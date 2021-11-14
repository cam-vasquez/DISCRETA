#include <iostream>
#include <cmath>
/* #include <iomanip> */

using namespace std;

float edad, nGanadores, nJugadores, numCristales, pEmpirica, compProbEmp, pHabilidades, pJugadores, pCristales;
string nombre, apellido, sexo;
int id;

/* Prototipo de funciones  */
/* void probInicial();
void ingresarJugador();
void mostrarJugador();
void probEmpirica();
void probEdades();
void probCristales(); */

/* Función que permite calcular la probabilidad de ser escojido dentro del juego  */

void probInicial(){

    float nTotalPersonas, pInicial;

    cout << "Ingrese el numero de candidatos para el Juego del calamar " <<endl;
    cin >> nTotalPersonas;
    
    pInicial = 1/nTotalPersonas;
    
    /* cout << fixed << setprecision(4); */
    cout << "La probabilidad de ser elegido para el juego del calamar segun su poblacion es: " << pInicial <<endl;    
}

/* Función que permite ingresar el perfil del jugador  */

void ingresarJugador(void){
    
    cout <<endl;
    cout << endl << "Registro de jugador" << endl;
    cout << "Ingrese su ID: " <<endl; 
    cin >> id;
    cout << "Ingrese su nombre: " <<endl; 
    cin >> nombre;
    cout << "Ingrese su apellido: " <<endl; 
    cin >> apellido;
    cout << "Ingrese su edad: " <<endl; 
    cin >> edad;
    cout << "Ingrese su genero: " <<endl; 
    cin >> sexo;
}

/* Función que permite mostrar el perfil del jugador  */

void mostrarJugador(){
    cout <<endl;
    cout << "Jugagor registrado" <<endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: "<< apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Genero: " << sexo << endl;
    cout << "Numero de jugador asignado: " << id << endl;
}

/* Función que permite calcular la probabilidad empirica  */

void probEmpirica(void){
    cout <<endl;
    cout << "Ingrese la cantidad de personas que participaran en el Juego del Calamar: " << endl;
    cin >> nJugadores;

    cout << "Ingrese la cantidad de personas que ganarian en  el Juego del Calamar: ";
    cin >> nGanadores;

    pEmpirica = nGanadores/nJugadores;
    compProbEmp = 1 - pEmpirica;

   /*  cout << fixed << setprecision(4); */
    cout << "Probabilidad de ganar: " << pEmpirica <<endl;
    cout << "Probabilidad de perder: " << compProbEmp <<endl;
}

/* Función que permite calcular la probabilidad segun rangos de edades  */

void probEdades(void){

/*  Probabilidad inicial basada en la serie de pasar cada uno de los juegos es:
    Luz Verde y Luz Roja [0.441] 
    Galletas [0.5373] 
    Fuerza de cuerda [0.5] 
    Canicas: [0.5] 
    Cristales: [0.1875] 
    Calamar: [0.5] 
    */

    float luzVR, galletas, cuerda, canicas, cristales, calamar;

    cout << endl << endl;
    cout << endl <<  "\t\tProbabilidad de ganar segun la edad del jugador" <<endl;

    pHabilidades = (0.441) * (0.5373) * (0.5) * (0.5) * (0.1875) * (0.5);
    
/*     cout << fixed << setprecision(4);
 */ 
    cout << endl << "La probabilidad inicial de pasar todos los juegos basado en la serie es de: " << pHabilidades  << endl;
    cout << endl << endl; 

    if (edad >= 18 && edad <= 40 ){
        luzVR = 0.441, galletas = 0.5373, cuerda = 0.5, canicas = 0.5, cristales = 0.1875, calamar = 0.5;

        pJugadores = luzVR * galletas * cuerda * canicas * cristales * calamar;
        /* cout << fixed << setprecision(4);  */   
        cout <<"Probabilidad de ganar de un jugador dentro del rango de [18 a 40] es: " << pJugadores <<endl;
        }
        
    else if(edad >= 41 && edad <= 60){

        luzVR = 0.2205, galletas = 0.1236, cuerda = 0.4, canicas = 0.5, cristales = 0.1875, calamar = 0.5;

        /* cout << fixed << setprecision(4) */;
        pJugadores = luzVR* galletas * cuerda * canicas * cristales * calamar;
        cout << endl << "Probabilidad de ganar de un jugador dentro del rango de [41 a 60] es " << pJugadores <<endl;
        }

    else{

        luzVR = 0.1103, galletas =  0.055, cuerda = 0.3, canicas = 0.5, cristales = 0.1875, calamar = 0.5;

        pJugadores = luzVR * galletas * cuerda * canicas * cristales * calamar;
        /* cout << fixed << setprecision(4); */
        cout << endl << "Probabilidad que un jugador [mayor a 60] gane el juego es: " << pJugadores << endl;
        }

}

/* Función que permite calcular la probabilidad de ganar el juego de Cristales  */


void probCristales(void){

    cout << endl;
    cout << endl << "Probabilidad de ganar el juego de [LOS CRISTALES]" << endl;

   /* La probabilidad inicial de pasar la prueba en base al numero de personas que pasaron en la serie del total que realizaron la prueba es: [0.1875] */

  /* Sin embargo, la probabilidad que tenia el primer jugador en esta prueba de la serie era de [0.00038] */
    
    cout << " Ingrese la cantidad de pares de cristales que tiene que pasar: ";
    cin >> numCristales;
    cout << endl;

 /* Teniendo en cuenta que cada paso que da la probabilidad es 0.5 ya que tiene que elegir entre templado y normal */

    pCristales = pow(0.5, numCristales);
    
    /* cout << fixed << setprecision(4); */
    cout << endl << " Probabilidad de ganar el juego sin equivocarse si es el primero en pasar: "<< pCristales << endl;   
}