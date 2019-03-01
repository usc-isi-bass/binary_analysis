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

int n,i,j,a1,b1,t,m;
char *p,a[300]={"\0"},
b[50]={"\0"},d[300][50]={"\0"};

			
	void main()
{

scanf("%s %s",b,a);
	a1=strlen(a);
	b1=strlen(b);
  for(i=0;i<a1;i++)
      for(j=0;j<b1;j++)
     d[i][j]=a[i+j];
  for(i=0;i<a1;i++)
   if(strcmp(d[i],b)==0) 
	   break;
 
   printf("%d",i);
}

