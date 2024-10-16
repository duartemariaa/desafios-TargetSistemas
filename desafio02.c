#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin); 
    
    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a' aparece %d vezes.\n", count);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}
