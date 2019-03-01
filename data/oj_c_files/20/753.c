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
  char str[100][11],substr[100][4];
  int k,i=0,j,m;
  while(scanf("%s%s",str[i],substr[i])!=EOF)
  {
    k=0;
    m=str[i][0];
    for(j=1;str[i][j];j++)
      if(str[i][j]>m)
      {m=str[i][j];
       k=j;}
    for(j=0;j<=k;j++)
     printf("%c",str[i][j]);
    printf("%s",substr[i]);
    for(;str[i][j];j++)
     printf("%c",str[i][j]);
    printf("\n");
    i++;
  }
}

