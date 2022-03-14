#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "./calcul.h"

/*float calculer_moyenne(float *tableau) {
	float moyenne = 0;
	for (int i = 0; i < 7; i++) {
		moyenne = tableau[i] + moyenne;
	}
	return moyenne / 7;

}

//int compare(const void * a, const void * b)
//{
	//float fa = *(const float*)a;
	//float fb = *(const float*)b;
	//return (fa > fb) - (fa - fb);
//
//	return (*(float*)a - *(float*)b);
//}

float calculer_mediane(float *tableau) {
	//qsort(tableau, 7, 7, tri_bulle);
	return tableau[3];

}


float calculer_ecart_type(float *tableau, float *max, float *min) {
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
}*/

int main(int argc, char ** argv)
{
	float tableau[7];
	int a;
	float min = 0, max = 0, moyenne = 0, mediane = 0, ecart_type = 0;

	std::cout << "Rentrez les prix de l'essence de chaque jour de la semaine en euro \n";
	for (int i = 0; i < 7; i++) {
		std::cin >> tableau[i];
	}


	//tri a bulle du tableau
	int j, tmp;
	for (int i = 0; i < 7 - 1; i++)
	{
		for (j = 0; j < 7 - i - 1; j++)
		{
			if (tableau[j] > tableau[j + 1])
			{
				tmp = tableau[j];
				tableau[j] = tableau[j + 1];
				tableau[j + 1] = tmp;
			}
		}
	}


	std::cout << "\n";
	/*moyenne = calculer_moyenne(tableau);
	mediane = calculer_mediane(tableau);
	ecart_type = calculer_ecart_type(tableau, &max, &min);*/

	moyenne = calcul::calculer_moyenne(tableau);
	mediane = calcul::calculer_mediane(tableau);
	ecart_type = calcul::calculer_ecart_type(tableau, &max, &min);

	std::cout << "La moyenne du prix de l'essence est donc " << moyenne << "\n";
	std::cout << "La mediane du prix de l'essence est donc " << mediane << "\n";
	std::cout << "L'écart type du prix de l'essence est donc " << ecart_type;
}