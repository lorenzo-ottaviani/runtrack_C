// Fichier manhattan.h
#ifndef MANHATTAN_H
#define MANHATTAN_H

typedef struct point  // Structure point définissant un point de Manhattan
{
    int longitude;
    int latitude;
} point;


#define ABS(x) ((x) < 0 ? -(x) : (x))  // Macro définissant une valeur absolue de x

int manhattan (point a, point b);  // Prototype de la fonction manhattan

#endif