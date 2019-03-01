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
 int j;
 char a[80],b[80];
 gets(a);
 gets(b);
 j=0;
 while(a[j]!='\0') 
  {
   if((a[j]>='A')&&(a[j]<='Z'))
   a[j]=a[j]+32;
   j++;
  } 
  j=0;
 while(b[j]!='\0') 
  {
   if((b[j]>='A')&&(b[j]<='Z'))
   b[j]=b[j]+32;
   j++;
  } 
  if(strcmp(a,b)>0)
  printf(">");
  else if(strcmp(a,b)<0)
  printf("<");
  else if(strcmp(a,b)==0) printf("="); 
}