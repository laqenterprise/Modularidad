#ifndef  UTILIDADES_H
#define UTILIDADES_H
#include "tipos.h"
void flush_in();
void eliminarUsuario(Usuarios** usuarios,int* ,int index);
void eliminarVehiculos(Vehiculos** vehiculos,int* n,int index);
void eliminarViajes(Viajes** viajes,int* n,int index);
void eliminarPasos(Pasos** pasos,int* n,int index);
void eliminarIncidencias(Incidencias** incidencias,int* n,int index);
#endif
