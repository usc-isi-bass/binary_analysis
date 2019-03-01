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
  char a[20];
  int n,i,k=0;
  scanf("%d",&n);
  getchar();
  scanf("%s",a);
  printf("%s",a);
  k=strlen(a);
  for(i=1;i<n;i++)
  {
       scanf("%s",a);
       k=k+1+strlen(a);
       if(k>80)
       {
            printf("\n%s",a);
            k=strlen(a);
            continue;
       }
       if(k<=80)
       printf(" %s",a);
  }
  return 0;
}
