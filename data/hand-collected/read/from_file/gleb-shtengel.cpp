#include <stdio.h>
#include <stdlib.h>

FILE *in;

/*****************************************************************************/
//Function: read_string
//Inputs: Terminating charachter
//Outputs: String
//The purpose of this function is to read in string to a buffer
// and return the string to the calling function
/*****************************************************************************/

void read_string(char terminator,char *buffer)
{
    char ch;
    int i;
    i=0;
    ch ='a';
  if(!buffer){
   printf("Buffer array was not created\n");
   exit(0);
  }
    while (ch != terminator){
        fscanf(in,"%c",&ch);
        buffer[i]= ch;                   // Add the charachter to the buffer
        i++;
    }
  i--;                                           // to remove termination charachter
    buffer[i] = '\0';
}
