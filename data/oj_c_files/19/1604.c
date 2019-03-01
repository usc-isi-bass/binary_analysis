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
  int n,i,j=0;char x,y,z,m=0;
  char a[100];
  char b[100][100];
  char c[100];
  char d[100];
  gets(a);
  scanf("%s",&c);
  scanf("%s",&d);
  n=strlen(a);
  for(i=0;i<n;i++)
   {
    if (a[i]==' ') {j++;m=0;}
    else {b[j][m]=a[i];m++;}     
    }
  for(i=0;i<j+1;i++)
    {
      if (strcmp(b[i],c)==0) strcpy(b[i],d);
     }
  for(i=0;i<j;i++)
   printf("%s ",b[i]);
   printf("%s",b[i]);
  
}