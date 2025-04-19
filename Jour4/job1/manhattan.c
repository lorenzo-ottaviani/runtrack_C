/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 19/04/2025 19h22
* But du programme :
*    Calcule la distance de Manhattan entre deux points de Manhattan.
* Entrée : ∅
* Sortie : Affiche la distance entre les deux points.
*/

#include <stdio.h>

#include "manhattan.h"

int manhattan(point a, point b) {
    int distance = ABS(a.longitude - b.longitude) + ABS(a.latitude - b.latitude);

    return distance;
}


int main() {
    point time_square = {75797, -98550};
    point central_park = {78250, -96574};

    int distance_manhattan = manhattan(time_square, central_park);
    printf("Distance de Manhattan : %d\n", distance_manhattan);
    
    return 0;
}
