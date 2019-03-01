
// #include <io.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
// #include <time.h>
#include <ctype.h>
FILE *in; 

/*****************************************************************************/
//Function: read_len_chars
//Inputs: The length of the string
//Outputs: The string
//The purpose of this function is to read in a predefined number
//of charachters and return them as a string
/*****************************************************************************/

void read_len_chars(int string_length,char *len_chars_buffer)
{
    char ch;
    int i;
    ch ='a';
    if(!len_chars_buffer){
    printf("lens_char array was not created");
    exit(0);
  }
        for(i=0;i<string_length;i++){
            fscanf(in,"%c",&ch);         // Reads in a string of length string_length
      len_chars_buffer[i] = ch;
    }
    len_chars_buffer[i] = '\0';
}





