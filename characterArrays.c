#include <stdio.h>
#define MAXLINE 1000

int getLine(char s[], int lim);
void copy(char to[], char from[]);

int main() {
    char str[] = "Hello World!";
    printf("Original string: %s\n", str);

    reverse(str);
    printf("Reversed: %s\n", str);
    int len;                // Current line length
    int max = 0;            // Maximum length found so far
    char line[MAXLINE];     // Current input line buffer
    char longest[MAXLINE];  // Longest line saved (up to MAXLINE)

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("\n Longest line length: %d\n", max);
        printf("\n Content (truncated if too long): %s", longest);
    }
    return 0;
}

// Reads a line into s[], returns the length
int getLine(char s[], int lim) {
    int c, i = 0, length = 0;

    // Read up to the buffer limit
    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
        length++;
    }

    // If line exceeds buffer, keep counting characters
    while (c != EOF && c != '\n') {
        c = getchar();
        length++;
    }

    // Add newline if it was part of the input
    if (c == '\n') {
        if (i < lim - 1) {
            s[i++] = c;
        }
        length++;
    }

    s[i] = '\0'; // Null-terminate the string
    return length;
}

// Copies 'from' to 'to'
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

// verse string in place
void reverse(char s[]) {
    int i, j;
    char temp;
    
    i = 0; // first index
    j = strlen(s) - 1; //index of last char

    while (i < j) {
        // swap chars at positions i and j and increment 
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}