//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longestWord[100], word[100];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    int i = 0, j = 0;
    while (1)
     {
        j = 0;
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i++];
        }
        word[j] = '\0'; 

        if (strlen(word) > maxLen) {
            maxLen = strlen(word);
            strcpy(longestWord, word);
        }

        if (sentence[i] == '\0') 
            break;
        i++; 
    }

    printf("Longest word: %s\n", longestWord);

    return 0;
}
