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
 char *p;
 char (*q)[20];
 int i=0,j=0,k;
 p=(char *)malloc(sizeof(char)*100);
 q=(char *)calloc(50,sizeof(char)*20);
 gets(p);
 for(k=0;k<strlen(p);k++)
 {if(*(p+k)!=' ')
  {*(*(q+i)+j)=*(p+k);j++;}
  else i++,j=0;
 }
 for(k=i;k>0;k--)
 printf("%s ",*(q+k));
 printf("%s",*q);
}