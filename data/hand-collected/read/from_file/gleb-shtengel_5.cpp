#include <stdio.h>

FILE *in; 

/*****************************************************************************/
//Function: read_char
//Inputs: none
//Outputs: A character
//The purpose of this function is to read in a character and
//return the character to the calling function
//It is provided for values of type char
/*****************************************************************************/

char read_char_and_skip_terminator(void)
{
        char termin_ch,ch;
        ch ='a';
        fscanf(in,"%c",&ch);
    fscanf(in,"%c",&termin_ch);             //Skips the terminater
    return ch;
}