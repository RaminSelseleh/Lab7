#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

// the input and output sring size
char input[20];
char string[1000] = "";

// while loop to get the input
for(;;) {
    printf("Enter a string: ");

    // if input is not null find \n or start of new line
    if (fgets(input, sizeof(input), stdin) != NULL) {
        char *newline = strchr(input, '\n');
        // if new line found trim it and make it null
            *newline = '\0';
    }
    // else just exit the loop
    else {
        break;
    }
    
// check to see if "DONE" is entered or not
if (strcmp(input, "DONE") == 0) {
    // display string 
    printf("%s\n", string);
    // exit loop if DONE is found
    break;
}

// check to see If the input is contained within the longer string
if (strstr(string, input) != NULL ) {
    // if found do a new line without putting it in new string
    printf("%s\n", string);
    continue;
}
    // copy input to new output string 
    else if(strlen(string) == 0) {
        strcpy(string, input);
    }

    // check to see If the user input is less than the output string
    else if (strcmp(string, input) > 0) {
        // if yes then prepend on to the outpust string with space
        strcat(input, " ");
        // using swap technique to copy over the string
        char string2[1000] = "";
        strcpy(string2, input);
        strcat(string2, string);
        strcpy(string, string2);
    }

    // check to see If the input is greater than the longer string
    else if (strcmp(string, input) < 0) {
        // if yes then append to the output string with space
        strcat(string, " ");
        strcat(string, input);
    }

    // print the string
    printf("%s\n", string);

    } // ending for loop

} // end main


