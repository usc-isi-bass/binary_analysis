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

void main()
{
 int i,k;
 char str[100000];
 gets(str);
 k=0;
 for(i=0;i<strlen(str);i++)
 {
  if(str[i]==' ')
   continue;
  else
   {
    k++;
    if(str[i+1]==' ')
    {
     printf("%d,",k);
     k=0;
    }
    if(str[i+1]=='\0')
    {
     printf("%d\n",k);
    }
    }
  }
}


