#include <stdio.h>

FILE *in; 

/*****************************************************************************/
//Function: read_byte
//Inputs: none
//Outputs: A number of type 'int'
//The purpose of this function is to do a single read of a byte
//It does this by reading a charachter and outputting its integer value
//i.e. the Integer equivalent of the ascii value.
/*****************************************************************************/

int read_byte_and_skip_terminator(void)

{
    char ch,termin_ch;
  int i;
    ch ='a';
        fscanf(in,"%c",&ch);
    fscanf(in,"%c",&termin_ch);             //Skips the terminater
    i = (int)(ch);                          // gives integer value of ascii code
    return i;
}
