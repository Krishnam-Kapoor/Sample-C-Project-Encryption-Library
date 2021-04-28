/*
### Simple Symmetric encrpytion
*/
#include<stdio.h>

void encrypt(char *inputFileame, char *outputFilename)
{
    FILE *infile, *outfile;
    char *msg;
    infile = fopen(inputFileame, "r");
    outfile = fopen(outputFilename, "w");
    while(fscanf(infile, "%s", msg) != EOF)
    {
        for(int i=0; i < strlen(msg); i++)
        {
            msg[i] += 3;
        }
        fprintf(outfile, "%s "; msg);
    }
}

void decrypt(char *inputFileame, char *outputFilename)
{
    FILE *infile, *outfile;
    char *msg;
    infile = fopen(inputFileame, "r");
    outfile = fopen(outputFilename, "w");
    while(fscanf(infile, "%s", msg) != EOF)
    {
        for(int i=0; i < strlen(msg); i++)
        {
            msg[i] -= 3;
        }
        fprintf(outfile, "%s "; msg);
    }
}