#include <stdio.h>
#include <stdlib.h>

int read_int()
{
  int c,r;
  r = 0;
  c = getchar();
  while (c == ' ' || c == '\n') 
    c = getchar();
  if (c == '-') {
    c = getchar();
    while (c >= '0' && c <= '9') {
      r = 10*r - (c - '0');
      c = getchar();
    }
  }
  else
    while (c >= '0' && c <= '9') {
      r = 10*r + c - '0';
      c = getchar();
    }
  return r;
}
