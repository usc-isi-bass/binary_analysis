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
{char a[200];
  int n,i,j,k;
  gets(a);
  n=strlen(a);
  *(a+n)=' ';*(a-1)=' ';
  for(i=n-1,j=n+1;i>=-1;i--)
  if(*(a+i)==' ')
  {for(k=i+1;*(a+k)!=' ';k++,j++)
    *(a+j)=*(a+k);
    *(a+j)=*(a+k),j++;
  }
  for(i=0;i<n;i++)
  printf("%c",*(a+n+1+i));
}

