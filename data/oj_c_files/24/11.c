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
{
  char a[100][100];
  scanf("%s",a[0]);
  int i,j=0,k;
  for(i=1;getchar()==' ';i++)
  scanf("%s",a[i]);
  char (*max)[],(*min)[];
  max=&a[0];
  min=&a[0];
  for(j=1;j<i;j++)
  {    
       if(strlen(*max)<strlen(a[j]))
         max=&a[j];
       if(strlen(*min)>strlen(a[j]))
         min=&a[j];
  }
  puts(*max);
  puts(*min);

  return 0;
}