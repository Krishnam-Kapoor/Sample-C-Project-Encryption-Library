/*
### Simple Symmetric encrpytion
*/
#include <stdio.h>
#include <string.h>

void encrypt(char *inputFileame, char *outputFilename)
{
    FILE *infile, *outfile;
    char msg[1000];
    infile = fopen(inputFileame, "r");
    outfile = fopen(outputFilename, "w");
    while(fscanf(infile, "%s", msg) != EOF)
    {
        for(int i=0; i < strlen(msg); i++)
        {
            msg[i] += 3;
        }
        fprintf(outfile, "%s ", msg);
    }
}

void decrypt(char *inputFileame, char *outputFilename)
{
    FILE *infile, *outfile;
    char msg[1000];
    infile = fopen(inputFileame, "r");
    outfile = fopen(outputFilename, "w");
    while(fscanf(infile, "%s", msg) != EOF)
    {
        printf("%s\n", msg);
        for(int i=0; i < strlen(msg); i++)
        {
            msg[i] -= 3;
        }
        fprintf(outfile, "%s ", msg);
    }
}