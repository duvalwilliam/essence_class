#include "calcul.h"
#include "stdio.h"

float calcul::calculer_moyenne(float *tableau) {
	float moyenne = 0;
	for (int i = 0; i < 7; i++) {
		moyenne = tableau[i] + moyenne;
	}
	return moyenne / 7;

}

float calcul::calculer_mediane(float *tableau) {
	//qsort(tableau, 7, 7, tri_bulle);
	return tableau[3];
}

float calcul::calculer_ecart_type(float *tableau, float *max, float *min) {
	float ecart_type = 0;
	*max = tableau[1];
	*min = tableau[1];
	for (int i = 0; i < 7; i++) {
		if (tableau[i] > *max) {
			*max = tableau[i];
		}
		if (tableau[i] < *min) {
			*min = tableau[i];
		}
	}
	return ecart_type = *max - *min;
}