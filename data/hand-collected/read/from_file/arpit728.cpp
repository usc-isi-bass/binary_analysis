
#include <stdio.h>
#include <math.h>

#define gc getchar_unlocked 
long long read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  long long ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}