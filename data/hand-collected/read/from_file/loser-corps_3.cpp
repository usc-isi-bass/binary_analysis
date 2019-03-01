#include <stdio.h>
#include <malloc.h>


static void read_string(char *str, FILE *f)
{
  int n, i;

  n = fgetc(f);
  if (str != NULL) {
    for (i = 0; i < n; i++)
      str[i] = fgetc(f);
    str[i] = '\0';
  } else
    for (i = 0; i < n; i++)
      fgetc(f);
}