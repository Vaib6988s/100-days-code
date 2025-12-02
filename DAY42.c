//Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; i++)
     {
        char ch = str[i];

        if (ch >= 65 && ch <= 90) { 
            ch = ch + 32; 
        }
           
        if (ch >= 97 && ch <= 122) 
        { 
        
            if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117)
             { 
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
       
    }

 
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
