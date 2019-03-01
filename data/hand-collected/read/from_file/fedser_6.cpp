#include <stdio.h>

double
read_int (FILE *input, bool *badstatus)
{
  int x, zi, returnval;
  short zs;
  unsigned int u;

  if (*badstatus == true)
    return 0.0;

    double r;

  returnval = fscanf (input, " %lf", &r);
  if (returnval != 1)
    {
      *badstatus = true;
      r = 0.0;
    }
  return r;
}
