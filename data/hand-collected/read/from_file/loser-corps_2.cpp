#include <stdio.h>
#include <malloc.h>

static short int read_short(FILE *f)
{
  int c1, c2;

  c1 = fgetc(f) & 0xff;
  c2 = fgetc(f) & 0xff;
  return (c1 | (c2 << 8));
}