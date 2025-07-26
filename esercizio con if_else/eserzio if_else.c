//esercizio per calcolo delle spese mensili basate su saldo iniziale, accrediti e debiti con un limite da imporre.

#include <stdio.h>

int main (void)

{
    printf ("%s", "Inserire saldo iniziale:   ");
    int saldo; //saldo iniziale
    scanf ("%d", &saldo);

    printf ("%s", "Inserire addebiti:   ");
    int spese; //spese varie
    scanf ("%d", &spese);

    printf ("%s", "Inserire accrediti:  ");
    int accrediti; // stipendio in ingresso
    scanf ("%d", &accrediti);

    printf ("%s", "Inserire Limite:  ");
    int limite; // limite massimo spesa mensile
    scanf ("%d", &limite);

    //calcolo
    saldo = saldo - spese + accrediti;

    //stampa limite e saldo
    printf ("%s%d\n %s%d\n", "Limite: ", limite, "Saldo: ", saldo);

    //avvisa se il saldo supera il limite
    if (saldo > limite) {
        printf ("%s", "Limite superato.");
    } //fine if
    else {
        printf ("%s", "Limite non superato");
    } //fine else


}