#include <stdio.h>

double
read_int (FILE *input, bool *badstatus)
{
  int x, zi, returnval;
  short zs;
  unsigned int u;

  if (*badstatus == true)
    return 0.0;
  
  returnval = fread (&zi, sizeof(zi), 1, input);
  if (returnval == 1)
    x = (int)zi;
  else
    {
      x = 0;
      *badstatus = true;
    }
      
  return (double)x;
}
