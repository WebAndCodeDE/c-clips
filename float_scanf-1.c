// Mehrere Zahlen hintereinander eingeben, einlesen und verarbeiten

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int ersteZahlInt, zweiteZahlInt;
	printf("Zwei Zahlen eingeben: ");
    scanf("%i %i", &ersteZahlInt, &zweiteZahlInt);
    printf("%i %i\n", ersteZahlInt + zweiteZahlInt, ersteZahlInt - zweiteZahlInt);

    float ersteZahlFloat, zweiteZahlFloat;
    printf("\nWeitere zwei Zahlen eingeben: ");
    scanf("%f %f", &ersteZahlFloat, &zweiteZahlFloat);
    printf("%.1f %.1f", ersteZahlFloat + zweiteZahlFloat, ersteZahlFloat - zweiteZahlFloat);

    return 0;
}
