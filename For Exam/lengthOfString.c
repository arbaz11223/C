#include <stdio.h>

int main() {
    char str[] = "Hello i am a good boy";
    int length = 0;

    // Calculating the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Displaying the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}