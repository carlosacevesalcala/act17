#include "civilizacion.h"


Civilizacion::Civilizacion(){

}

void Civilizacion::setnombre(const string &v){
    
    nombre=v;
}

string Civilizacion::getnombre(){
    
    return nombre;
}

void Civilizacion::setx(int v){
    
    x=v;
}

int Civilizacion::getx(){
  
    return x;
}

void Civilizacion::sety(int v){
    
    y=v;
}

int Civilizacion::gety(){
    
    return y;
}

void Civilizacion::setpuntuacion(int v){
    
    puntuacion=v;
}

int Civilizacion::getpuntuacion(){

    return puntuacion;
}