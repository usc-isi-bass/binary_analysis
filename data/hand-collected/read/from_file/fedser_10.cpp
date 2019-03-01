#include <stdio.h>

double
read_int (FILE *input, bool *badstatus)
{
  int x, zi, returnval;
  short zs;
  unsigned int u;

  if (*badstatus == true)
    return 0.0;

  u = (((unsigned int)getc(input)) << 8);
  u |= (unsigned int) getc(input);
  if (u > 0x7fff)
    x = - (int)(0x10000 - u);
  else
    x = (int)u;

  return (double)x;
}
