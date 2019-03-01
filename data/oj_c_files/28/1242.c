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

main()
{
  int i,n,sum=0;
  char a[10000];
  gets(a);
  n=strlen(a);
  for(i=0;i<n;i++)
  { 
    if(a[i]!=' ')
    {
      sum=sum+1;
      continue;
    }
    else if(a[i]==' '&&a[i-1]!=' ')
    {
      printf("%d,",sum); 
      sum=0;
    }
    else continue;
  }
  printf("%d",sum);
}