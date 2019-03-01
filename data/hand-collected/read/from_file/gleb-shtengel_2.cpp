// #include <io.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
// #include <time.h>
#include <ctype.h>
// #include <conio.h>
// #include <dir.h>

#define MAXPATH       4096

/*****************************************************************************/
//Function: read_int
//Inputs: Terminating charachter
//Outputs: A number of type 'long'
//The purpose of this function is to read in a number and
// return the number to the calling function
/*****************************************************************************/
FILE *in; 

long read_int(char terminator)
{
    long value;
    char ch,*int_buffer;
    int i;
    i=0;
    ch ='a';
  int_buffer = (char*)malloc(MAXPATH);
  if(!int_buffer){
    exit(0);
  }
  do { fscanf(in,"%c",&ch);} while(isspace(ch));// Skip leading spaces
  int_buffer[i]= ch;                                                  //Captures first char
  i++;
    while (ch != terminator){
        fscanf(in,"%c",&ch);
        if (((!isalpha(ch)) && (!isspace(ch)))){       //Don't store spaces or letters
            int_buffer[i]= ch;
        i++;
    }
    }
    int_buffer[i] = '\0';
    value = (atol(int_buffer));                  //convert value to a long integer
  free(int_buffer);
  return value;
}
