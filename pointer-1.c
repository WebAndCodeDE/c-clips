#include <stdio.h>

void increment(int *v) {
        (*v)++;
    }


      	int main() {
        int a;
        printf("Bitte geben sie eine Zahl ein: ");
        scanf("%d", &a);
        increment(&a);
        printf("%d", a);
    	return 0;
    }
