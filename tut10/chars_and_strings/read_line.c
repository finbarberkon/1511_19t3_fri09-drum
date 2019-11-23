// Read a line of input when we ARE TOLD how long it might be

#include <stdio.h>

#define MAX_STR_LEN 16

void read_line(char *string, int len);

int main(void) {
    // Declare a character array to hold our string. Set it initially to be
    // all '\0' - this ensures the string is valid by default
    char string[MAX_STR_LEN] = {'\0'};

    // Read in a line...
    read_line(string, MAX_STR_LEN);

    // ... and print it out.  The `%s` format code prints a string.
    printf("You entered <%s>\n", string);

    return 0;
}

// Reads a line of input into `string`, excluding the newline;
// then ensures that `string` is a null-terminated string.
void read_line(char *string, int len) {
    fgets(string, len, stdin);
    
    int i = 0;
    while (string[i] != '\n') {
        i++;
    }
    string[i] = '\0';
}
