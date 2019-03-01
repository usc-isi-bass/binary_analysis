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
  char str[200];
  int i,j;
  gets(str);
  for(j=0,i=0;str[i]!='\0';i++)
  {
     if(str[i]!=' '||(j!=0&&str[j-1]!=' '))
     {
        str[j]=str[i];
        j++;
     }
  }
  str[j]='\0';
  printf("%s",str);
}