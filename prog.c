#include <stdio.h>
#include <string.h>
#include "codex.h"

int main(int argc, char* argv[])
{
    char *inputfile, *outputfile, *action;
    if(argc < 4 || argc > 4){
        printf("Invalid number of arguments. 3 arguments expected.")
    }
    else{
        inputfile = argv[1];
        outputfile = argv[2];
        action = argv[3];
    }
    if(strcmp(action, "encrypt"))
    {
        encrypt(inputfile, outputfile);
    }
    else(strcmp(action, "decrypt"))
    {
        decrypt(inputfile, outputfile);
    }
    else
    {
        printf("Invalid Action. Exiting.")
    }
}