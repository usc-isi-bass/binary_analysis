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

struct s
{
      char a[100];
      char b[100];
      char c;
      int d;
      char e[100];
      char f[100];
      }k[1000];
int n;
int main(int argc, char *argv[])
{ int i;
    
  for(i=0;;i++)
  {
     scanf("%s",k[i].a);
     if(strcmp(k[i].a,"end")==0)
     break;
     scanf(" %s %c %d %s %s",k[i].b,&k[i].c,&k[i].d,k[i].e,k[i].f);
  }
  for(i=i-1;i>=0;i--)
  printf("%s %s %c %d %s %s\n",k[i].a,k[i].b,k[i].c,k[i].d,k[i].e,k[i].f);
  return 0;
}
