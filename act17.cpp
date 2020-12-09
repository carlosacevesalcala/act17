#include <iostream>
#include "videogame.h"

using namespace std;

int main(){
    Videogame v;
    string op;

    while (true)
    {
        cout<<"1)  Nombre del usuario"<<endl;
        cout<<"2)  Agregar civilizacion"<<endl;
        cout<<"3)  Insertar civilizacion"<<endl;
        cout<<"4)  Crear civilizaciones"<<endl;
        cout<<"5)  Primera civilizacion"<<endl;
        cout<<"6)  Ultima civilizacion"<<endl;
        cout<<"7)  Ordenar"<<endl;
        cout<<"8)  Eliminar civilizacion"<<endl;
        cout<<"9)  Buscar"<<endl;
        cout<<"10) Modificar"<<endl;
        cout<<"11) Resumen"<<endl;
        cout<<"12) Salir"<<endl;
        getline(cin, op);

        if(op == "1"){
            Videogame v;
            string nom;
            cin>>nom;
            v.setusuario(nom);
            cout<<v.getusuario()<<endl;
            cin.ignore();
        }
        else if (op == "2")
        {
            Civilizacion c;
            cin>>c;
            v.agregaralfinal(c);
            cin.ignore();
        }
        else if (op == "3")
        {
            Civilizacion c;
            cin>>c;

            size_t pos;
            cout<<"posicion: ";
            cin>>pos; cin.ignore();

            if (pos>=v.size())
            {
                cout<<"posicion no valida"<<endl;
            }
            else{
                v.insertar(c, pos);
            }
        }
        else if (op == "4")
        {
            Civilizacion c;
            cin>>c;
            size_t n;
            cout<<"n: ";
            cin>>n; cin.ignore();

            v.crear(c, n);
        }
        else if (op == "5")
        {
            v.primera();
        }
        else if (op == "6")
        {
            v.ultima();
        }
        else if (op == "7")
        {
            string o;
            while (true){
                    cout<<"1) Ordenar nombre"<<endl;
                    cout<<"2) Ordenar ubicacion en x"<<endl;
                    cout<<"3) Ordenar ubicacion en y"<<endl;
                    cout<<"4) Ordenar puntuacion"<<endl;
                    cout<<"0) salir"<<endl;
                    getline(cin, o);
                if (o == "1")
                {
                    v.ordenar_n();
                }
                
                else if (o == "2")
                {
                    v.ordenar_x();
                }

                else if (o == "3")
                {
                    v.ordenar_y();
                }

                else if (o == "4")
                {
                    v.ordenar_p();
                }
                
                else if (o == "0")
                {
                    break;
                }
            }
        }
        else if (op == "8")
        {
            size_t pos;
            cout<<"posicion: ";
            cin>>pos; cin.ignore();

            if (pos>=v.size())
            {
                cout<<"posicion no valida"<<endl;
            }
            else{
                v.eliminar(pos);
            }
        }
        else if (op == "9")
        {
            Civilizacion c;
            string n;
            cout<<"nombre:"<<endl;
            cin>>n;
            c.setnombre(n); cin.ignore();

            Civilizacion *ptr = v.buscar(c);

            if (ptr == nullptr)
            {
                cout<<"no encontrado"<<endl;
            }
            else
            {
                cout<<*ptr<<endl;
            }
        }
        else if (op == "10")
        {
            size_t pos;
            Civilizacion c;
            Civilizacion nuevo;
            string n;
            cout<<"nombre:"<<endl;
            cin>>n;
            c.setnombre(n); cin.ignore();

            Civilizacion *ptr = v.buscar(c);
            if (ptr == nullptr)
            {
                cout<<"no encontrado"<<endl;
            }
            else
            {
                
                string opc;

                while (true){
                    cout<<*ptr<<endl;
                    cout<<"1) Cambiar nombre"<<endl;
                    cout<<"2) Cambiar ubicacion en x"<<endl;
                    cout<<"3) Cambiar ubicacion en y"<<endl;
                    cout<<"4) Cambiar puntuacion"<<endl;
                    cout<<"0) salir"<<endl;
                    getline(cin, opc);
                    
                    
                    if (opc == "1")
                    {
                        cin>>n;
                        nuevo.setnombre(n);
                        v.modificar_n(c,nuevo);
                        cin.ignore();
                    }

                    else if (opc == "2")
                    {
                        int x;
                        cin>>x;
                        nuevo.setnombre(n);
                        nuevo.setx(x);
                        v.modificar_x(c,nuevo);
                        cin.ignore();
                    }

                    else if (opc == "3")
                    {
                        int y;
                        cin>>y;
                        nuevo.setnombre(n);
                        nuevo.sety(y);
                        v.modificar_y(c,nuevo);
                        cin.ignore();
                    }

                    else if (opc == "4")
                    {
                        int p;
                        cin>>p;
                        nuevo.setnombre(n);
                        nuevo.setpuntuacion(p);
                        v.modificar_p(c,nuevo);
                        cin.ignore();
                    }
                    
                    else if (opc == "0")
                    {
                        break;
                    }
                }
            }
        }
        else if (op == "11")
        {
            v.total();
        }
        else if (op == "12")
        {
            break;
        }
        
    }

    return 0;
}