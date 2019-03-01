// #include <io.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
// #include <time.h>
#include <ctype.h>
// #include <conio.h>
// #include <dir.h>


FILE *in; 

#define MAXPATH       4096
/*****************************************************************************/
//Function: read_float
//Inputs: Terminating charachter
//Outputs: A number of type 'float'
//The purpose of this function is to read in a number and
// return the number to the calling function
/*****************************************************************************/

float read_float(char terminator)

{
    float value;
    char ch, *float_buffer;
    int i;
    i=0;
    ch ='a';
  float_buffer = (char*)malloc(MAXPATH);
  if (!float_buffer){
    exit(0);
  }
  do { fscanf(in,"%c",&ch);} while(isspace(ch));// Skip leading spaces
  float_buffer[i]= ch;                          //Store any numbers read in
  i++;
    while (ch != terminator){
        fscanf(in,"%c",&ch);
        float_buffer[i]= ch;                      // Try checking spaces and letters
        i++;
    }
  i--;
    float_buffer[i] = '\0';
  if (strcmp(float_buffer, "+INF") == 0) strcpy(float_buffer, "0");
    value = (atof(float_buffer));               // Convert value to a float
  free(float_buffer);
  return value;
}
