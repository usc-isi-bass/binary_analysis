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
 p=(char *)malloc(sizeof(char)*500);
 gets(p);
 int i,j,k,flag;
 for(j=1;j<strlen(p);j++)
  for(i=0;i<strlen(p)-1;i++)
  {flag=1;
   if(i+j<=strlen(p)){
   for(k=0;k<j/2+1;k++)
   if(*(p+i+k)!=*(p+i+j-k))
   {flag=0;break;}
   if(flag)
   {for(k=i;k<=i+j;k++)
    printf("%c",*(p+k));
    printf("\n");} }
  }
}