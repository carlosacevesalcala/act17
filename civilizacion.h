#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include<iostream>
#include <iomanip>

using namespace std;

class Civilizacion{
    private:
    string nombre;
    int x;
    int y;
    int puntuacion;

    public:
    Civilizacion();

    void setnombre(const string &v);
    string getnombre();
    void setx(int v);
    int getx();
    void sety(int v);
    int gety();
    void setpuntuacion(int v);
    int getpuntuacion();

    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
        out<<left;
        out<<setw(10)<<c.nombre;
        out<<setw(15)<<c.x;
        out<<setw(15)<<c.y;
        out<<setw(10)<<c.puntuacion;
        out<<endl;
        return out;
    }

    friend istream& operator>>(istream &in, Civilizacion &c)
    {
        cout<<"nombre: ";
        getline(cin, c.nombre);
        cout<<"ubicacion en x: ";
        cin>>c.x;
        cout<<"ubicacion en y: ";
        cin>>c.y;
        cout<<"puntuacion: ";
        cin>>c.puntuacion;
        return in;
    }

    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }
    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }
    
    bool operator<(const Civilizacion& c)
    {
        return nombre < c.nombre;
    }
     bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }

};

#endif