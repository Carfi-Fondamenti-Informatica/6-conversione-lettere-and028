#include "lib.h"

char conversione (char a) {

    if (((a>=65)&&(a<=90)) || ((a>=97)&&(a<=122))) {

        if ((a>=65)&&(a<=90)) {
            char risultato=0;
            risultato=a+32;
            return risultato;

        }

        if ((a>=97)&&(a<=122)) {
            char risultato = 0;
            risultato = a-32;
            return risultato;
        }


        return 49;


    } else {
       return 48;
    }




}

