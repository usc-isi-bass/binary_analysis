#include <stdio.h>
#include <malloc.h>

static int read_int(FILE *f)
{
  int c1, c2, c3, c4;

  c1 = fgetc(f) & 0xff;
  c2 = fgetc(f) & 0xff;
  c3 = fgetc(f) & 0xff;
  c4 = fgetc(f) & 0xff;
  return (c1 | (c2 << 8) | (c3 << 16) | (c4 << 24));
}