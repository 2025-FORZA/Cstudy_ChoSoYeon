#include <stdio.h>
#include <ctype.h> 

int main(void) {
    char word[1000001]; 
    int count[26] = { 0 }; 
    int max = 0;
    char result = '?';

    scanf("%s", word); 


    for (int i = 0; word[i] != '\0'; i++) {
        char ch = word[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        count[ch - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            result = 'A' + i;
        }
        else if (count[i] == max) {
            result = '?'; 
        }
    }

    printf("%c\n", result);
    return 0;
}
