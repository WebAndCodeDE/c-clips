#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    for (int i = 0; i < 3; i++){
        char ch[100] = "";
        printf("Gib bitte ein Zeichen oder ein Wort ein: ");
        // Um nicht nur ein einzelnes Zeichen, sondern eine Zeichenkette einzulesen
        // muss statt "scanf" der Befehl "fgets" verwendet werden
        fgets(ch, 100, stdin);
        printf("%s", ch);
    }
    return 0;
}
