#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 50

void removeArticles(FILE *inputFile, FILE *outputFile) {
    char word[MAX_WORD_LENGTH];
    char c;
    int wordLength = 0;
    
    while ((c = fgetc(inputFile)) != EOF) {
        if (isalpha(c)) {
            word[wordLength++] = c;
            if (wordLength >= MAX_WORD_LENGTH) {
                fprintf(stderr, "Word length exceeds maximum allowed.\n");
                exit(1);
            }
        } else { 
            word[wordLength] = '\0'; 
            if (strcmp(word, "a") == 0 || strcmp(word, "the") == 0 || strcmp(word, "an") == 0)
                fprintf(outputFile, " ");
            else
                fprintf(outputFile, "%s", word);
            wordLength = 0;
            if (!isspace(c))
                fprintf(outputFile, "%c", c);
        }
    }
    if (wordLength > 0)
        fprintf(outputFile, "%s", word);
}

int main() {
    FILE *inputFile, *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }
    removeArticles(inputFile, outputFile);
    fclose(inputFile);
    fclose(outputFile);
    
    printf("Words 'a', 'an', and 'the' replaced with blank space and written to output.txt successfully.\n");
    
    return 0;
}
