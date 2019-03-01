#include <stdio.h>
FILE *in; 

/*****************************************************************************/
//Function: read_image
//Inputs: The total number of values stored for the image i.e. image length
//Outputs: A buffer full of floating point numbers( The image values )
//The purpose of this function is to read in the image as
//a buffer of floating point numbers
/*****************************************************************************/
void read_image(long rd_image_length,float *image_buffer)
{
  fread(image_buffer,4,(size_t)rd_image_length,in);
                                                                                //Reads the image 4 bytes at a time

}// End of read_image
