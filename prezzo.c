//
// Created by jinjiakai on 2024/11/21.
//

#include "prezzo.h"
float calcola_prezzo_sconto(float prezzo, float sconto_percentuale) {
    double sconto = (prezzo * sconto_percentuale) / 100;
    return prezzo - sconto;
}