#include <stdio.h>

double
read_float (FILE *input, bool *badstatus)
{
  float f;
  int returnval;
  
  if (*badstatus == true)
    return 0;
  returnval = fscanf (input, " %f", &f);

  if (returnval != 1 || f != f)
    /* failure, or NaN */
    {
      *badstatus = true;
      return 0.0;
    }
  else
    return (double)f;
}