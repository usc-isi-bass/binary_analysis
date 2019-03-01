#include <stdio.h>

/* read a single byte from input stream, return as unsigned int (0..255) */
unsigned int
read_byte_as_unsigned_int (FILE *input, bool *badstatus)
{
  int newint;

  if (*badstatus == true)
    return 0;

  newint = getc (input);
  /* have an unsigned char cast to an int, in range 0..255 */
  if (newint == EOF)
    {
      *badstatus = true;
      return 0;
    }
  else
    return (unsigned int)newint;
}
