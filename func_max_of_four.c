#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    printf("Bitte vier Ganzzahlen hintereinander eingeben: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int max1, max2, max3 = 0;
    if(a > b){
        max1 = a;
    } else {
        max1 = b;
    }

    if(c > max1){
        max2 = c;
    } else {
        max2 = max1;
    }

    if(d > max2){
        max3 = d;
    } else {
        max3 = max2;
    }

    return max3;
}
