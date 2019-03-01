#include <stdio.h>

static int
read_short(FILE *file, short *ret)
{
   unsigned char b[2];
   if (fread(b, sizeof(unsigned char), 2, file) != 2) return 0;
   *ret = (b[1] << 8) | b[0];
   return 1;
}