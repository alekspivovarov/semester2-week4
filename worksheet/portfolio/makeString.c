
/*
Name: Aleksandr Pivovarov
Student ID: 202029245
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[50];

    // process the command-line data using appropriate string functions
    strcpy(buffer, argv[1]);

    printf("%s\n", buffer); // use only this single print statement in your submitted code

    return 0;
}