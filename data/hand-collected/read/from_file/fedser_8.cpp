#include <stdio.h>

double
read_int (FILE *input, bool *badstatus)
{
  int x, zi, returnval;
  short zs;
  unsigned int u;

  if (*badstatus == true)
    return 0.0;
  returnval = fread (&zs, sizeof(zs), 1, input);
  if (returnval == 1)
    x = (int)zs;
  else
    {
      x = 0;
      *badstatus = true;
    }
    
  return (double)x;
}
