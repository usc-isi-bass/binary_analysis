#include <stdio.h>
#include <stdlib.h>

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
      c = (char) getc (input);
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