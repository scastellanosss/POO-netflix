#ifndef NETFLIX_H
#define NETFLIX_H

#include <iostream>

using namespace std;

class pelicula{
    private:
        string ID;
        string nombre;
        float duracion;
        string genero;
        int calificacion;
    public:
    pelicula(string id, string nom, float dur, string g, int calificacion);
    int get_calificacion(){ return calificacion;};
    void set_calificacion(int calificacion);

};
pelicula::pelicula(string id, string nom, float dur, string g, int calificacion){
    ID = id;
    nombre = nom;
    duracion = dur;
    genero = g;
    calificacion = calif;

}

void pelicula::set_calificacion(int calif){
    
}
#endif