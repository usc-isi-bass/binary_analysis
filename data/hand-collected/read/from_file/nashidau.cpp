#include <stdio.h>

#define ARGB_JOIN(a,r,g,b) \
        (((a) << 24) + ((r) << 16) + ((g) << 8) + (b))


static int
read_int(FILE *file, int *ret)
{
   unsigned char b[4];
   if (fread(b, sizeof(unsigned char), 4, file) != 4) return 0;
   *ret = ARGB_JOIN(b[3], b[2], b[1], b[0]);
   return 1;
}

static int
read_uint(FILE *file, unsigned int *ret)
{
   unsigned char       b[4];
   if (fread(b, sizeof(unsigned char), 4, file) != 4) return 0;
   *ret = ARGB_JOIN(b[3], b[2], b[1], b[0]);
   return 1;
}
