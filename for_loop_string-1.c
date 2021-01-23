// Es wird ein numerischer Zahlenbereich (zwei Zahlen) eingegeben und mit Hilfe des Programms wird der Zahlenbereich in
// Wörtern dargestellt

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int a, b;
    char* wordNums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("Ihre zwei Zahlen: ");
    scanf("%d\n%d", &a, &b);
    for(int i = a; i <= b; i++){

        if(i > 9) {
            if(i % 2 == 0)
                printf("even\n");
            else printf("odd\n");
        }
        else printf("%s\n", wordNums[i]);
    }
    return 0;
}
