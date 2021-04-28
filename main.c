#include <stdio.h>
#include <string.h>
#include "src/codex.h"

int main(int argc, char* argv[])
{
    char *inputfile, *outputfile, *action;
    if(argc != 4){
        printf("Invalid number of arguments. 3 arguments expected.\n");
        return 0;
    }
    else{
        inputfile = argv[1];
        outputfile = argv[2];
        action = argv[3];
    }
    if(strcmp(action, "encrypt") == 0)
    {
        encrypt(inputfile, outputfile);
    }
    else if(strcmp(action, "decrypt") == 0)
    {
        decrypt(inputfile, outputfile);
    }
    else
    {
        printf("Invalid Action. Exiting.\n");
        return 0;
    }
    return 0;
}