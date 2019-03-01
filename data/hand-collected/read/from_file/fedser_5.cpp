#include <stdio.h>

double
read_float (FILE *input, bool *badstatus)
{
  float f;
  int returnval;
  
  if (*badstatus == true)
    return 0;
  returnval = fread (&f, sizeof(f), 1, input);

  if (returnval != 1 || f != f)
    /* failure, or NaN */
    {
      *badstatus = true;
      return 0.0;
    }
  else
    return (double)f;
}