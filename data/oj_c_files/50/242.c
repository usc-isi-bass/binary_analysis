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
{ int w,a[365],b[365],c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int i,j,m;
  scanf("%d",&w);
  for(i=0;i<365;i=i+1)
	  a[i]=(w+i)%7;
  
  for(i=0;i<365;i++)
  b[i]=0;
  
  b[12]=1;
  for(i=0,m=12;i<12;i++)
  {m=m+c[i];
   b[m]=1;}
  for(i=0;i<365;i++)
  {if(a[i]==5&&b[i]==1)
    printf("%d\n",i/31+1);}
}
