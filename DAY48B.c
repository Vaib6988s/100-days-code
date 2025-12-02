//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];

    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    int start = 0, end = 0, len = strlen(sentence);

    while (start < len) {
        end = start;
        while (sentence[end] != ' ' && sentence[end] != '\0') {
            end++;
        }

        int i = start, j = end - 1;
        while (i < j) {
            char temp = sentence[i];
            sentence[i] = sentence[j];
            sentence[j] = temp;
            i++;
            j--;
        }

        start = end + 1;
    }

    printf("%s\n", sentence);

    return 0;
}
