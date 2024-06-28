// Malloced by AI (Don't know how to allocate memory yet)
// Beats %100 on Runtime - Beats %59 on Memory

#include <stdlib.h>
#include <string.h>

void addString(char *name, char addChar) {
    int AddIndex = strlen(name);
    name[AddIndex] = addChar;
    name[AddIndex + 1] = '\0';
}

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    char* LastOutput = (char*)malloc(201 * sizeof(char)); // Allocate memory for the result
    LastOutput[0] = '\0'; // Initialize as an empty string

    int Index = 0;
    char controlChar;

    while (1) {
        controlChar = strs[0][Index];
        if (controlChar == '\0') break;

        for (int i = 1; i < strsSize; i++) {
            if (strs[i][Index] != controlChar) {
                return LastOutput;
            }
        }

        addString(LastOutput, controlChar);
        Index++;
    }

    return LastOutput;
}
