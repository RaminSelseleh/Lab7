#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]) {

char string[1000]="";


// dont need to display the question everytime, do loop
for(int i = 1; i < argc; i++){

    // if word contained with new ignorfe and new line
    if (strstr(string, argv[i]) != NULL ) { 
        printf("%s\n", string);
        continue;
    }

    // import same formula from 7.1.c
    if (strcmp(string, argv[i]) > 0) {
        // using swap technique
        char string2[1000] = "";
        strcat(string2, argv[i]);
        strcat(string2, " ");
        strcat(string2, string);
        strcpy(string, string2);
    }

    // import same fromula from 7.1.c to c
    else if (strcmp(string, argv[i]) < 0) {
        strcat(string, argv[i]);
        strcat(string, " ");
    }

    // print the string
    printf("%s\n", string);

} // ending for loop


} // end main
