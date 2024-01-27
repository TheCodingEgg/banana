#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter: \n");
    char string[500];
    scanf("%s", string);
    int size = strlen(string);
    for (int i = 0; i < size; i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            printf("banana");
        } else {
            printf("b");
        }
    }
    return 0;
}