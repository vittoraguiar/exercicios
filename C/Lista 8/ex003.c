#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva uma função que leia ustring de caracteres e imprima os caracteres invertidos.
// Por exemplo, se a string lida for "xarope" deve imprimir "eporax"

char* InvertString(char word[]) {
    int length = strlen(word);
    char* reverse_word = malloc((length + 1) * sizeof(char));
    for(int i = 0; i < length; i++)
        reverse_word[i] = word[length - i - 1];
        reverse_word[length] = '\0';
    return reverse_word;
}

int main() {
    char word[50];
    gets(word);
    char* reverse_word = InvertString(word);
    puts(reverse_word);
    free(reverse_word);
    return 0;
}