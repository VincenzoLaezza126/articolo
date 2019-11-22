#include<stdio.h>
#include "articolo.h"

int main(){
    Articolo a1;
    Articolo a2;

    articolo_init(&a1); 
    articolo_init(&a2);

    articolo_setTitle(&a1, "Nuovo sindaco ad Afragola");
    articolo_setText(&a1, "Francesco Barra diventa il nuovo sindaco di Afragola");

    articolo_setTitle(&a2, "Arrestato il boss della camorra afragolese");
    articolo_setText(&a2, "Il latitante Giovanni Botta è stato arrestato ieri notte dai carabinieri dell'unità mobile di Rozzano");

    articolo_print(&a1);
    articolo_print(&a2);

return 0;
}