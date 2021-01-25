#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void textVerschluesseln(char text[]);

int main(void){
    char text[100];
    printf("Bitte geben sie den zu verschluesselnden Text ein: ");
    fgets(text, 100, stdin);
    textVerschluesseln(text);
    return 0;
}

void textVerschluesseln(char text[]){
    for (int i = 0; i < strlen(text); i++){
        if (text[i] == ' '){
            continue;
        } else {
            text[i] = text[i] + 3;
        }
    }
    printf("Der verschl\x81sselte Text lautet: %s", text);
}
