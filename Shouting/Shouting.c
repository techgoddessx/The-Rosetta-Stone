#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char line[1000];
    FILE *hand;
    int i; 

    hand = fopen("romeo.txt", "r"); /* This line opens the file 'romeo.txt' in read mode ("r") and associates it with the file pointer hand.*/
    while( fgets(line, 1000, hand) != NULL )
        for(i=0; i<strlen(line); i++) 
            putchar(toupper(line[i])); /* putchar(toupper(line[i])) converts each character to its uppercase equivalent using the toupper() function and prints the uppercase character to the console.*/
}
