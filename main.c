#include <stdio.h>

#include "prezzo.h"

int main(void) {
    float prezzo_vendita, percentuale_sconto, prezzo_sconto;


    printf("Inserisci il prezzo di vendita: ");
    scanf("%f", &prezzo_vendita);

    printf("Inserisci la percentuale di sconto: ");
    scanf("%f", &percentuale_sconto);

    prezzo_sconto = calcola_prezzo_sconto(prezzo_vendita, percentuale_sconto);


    printf("Il prezzo scontato e': %.2f\n", prezzo_sconto);

    return 0;
}
