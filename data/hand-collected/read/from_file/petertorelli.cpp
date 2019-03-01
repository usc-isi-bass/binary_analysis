#include <stdlib.h>
#include <stdio.h>

unsigned char
read_byte_as_unsigned_char (FILE *input, bool *badstatus)
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
    return (unsigned char)newint;
}

char *
read_string (FILE *input, bool *badstatus)
{
  int length = 0, buffer_length = 16; /* initial length */
  char *buffer;
  char c;

  if (*badstatus == true)
    return 0;

  buffer = (char *)malloc (buffer_length * sizeof(char));
  for ( ; ; )
    {
      if (length >= buffer_length)
    {
      buffer_length *= 2;
      buffer = (char *)realloc (buffer, (unsigned int)(buffer_length));
    }
      c = (char)read_byte_as_unsigned_char (input, badstatus);
      if ((*badstatus == true) || (c == '\n'))
    break;
      buffer [length++] = c;
    }

  if (*badstatus)
    {
      free (buffer);
      return NULL;
    }
  else
    {
      buffer [length] = '\0';   /*  null-terminate string */
      return buffer;
    }
}