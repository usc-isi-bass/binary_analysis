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


int main(int argc, char *argv[])
{
  char a[50];
  int n,i,j,line,l;
  scanf("%d",&n);
  scanf("%s",a);
  printf("%s",a);
  line=strlen(a);
  for(i=2;i<=n;i++)
  {
      scanf("%s",a);
      line+=strlen(a)+1;
      if(line<=80)
      {
          printf(" %s",a);
      }
      else
      {
          printf("\n%s",a);
          line=strlen(a);
      }
  }

  return 0;
}