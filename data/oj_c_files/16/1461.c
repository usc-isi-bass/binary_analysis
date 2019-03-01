#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
  {int a[5],b=0;
  do 
  {a[b]=getchar();b++;}
  while(b<5);
  if (a[1]=='\n') printf("%c",a[0]);
  else if (a[2]=='\n') printf("%c%c",a[1],a[0]);
  else if (a[3]=='\n') printf("%c%c%c",a[2],a[1],a[0]);
  else if (a[4]=='\n') printf("%c%c%c%c",a[3],a[2],a[1],a[0]);
  else printf("00001");
  return 0;
}
