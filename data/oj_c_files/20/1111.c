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
    char str[14],substr[4],c;
    int t,i,l;
    while(scanf("%s%s",str,substr)!=EOF)
    {
      c=str[0];t=0;l=strlen(str);
      for(i=1;str[i]!='\0';i++)
      if(str[i]>c) {c=str[i];t=i;}
      for(i=0;i<=t;i++)
      printf("%c",str[i]);
      for(i=0;i<3;i++)
      printf("%c",substr[i]);
      for(i=t+1;i<l;i++)
      printf("%c",str[i]);
      printf("\n");
    }
}