#include <stdio.h>
#include <stdlib.h> // Wird für die abs()-Funktion benötigt

void update(int *a,int *b) {
    // Complete this function
    int x, y;
    x = *a + *b;
    y = *a - *b;
    *a = x;
    *b = abs(y);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Bitte zwei Zahlen eingeben: ");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
