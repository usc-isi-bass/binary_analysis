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
  char c;
  int m,n=1,i;
  int a[1001]={0};
  scanf("%d",&m);
  for(i=m;i<1000;i++)
	  a[i]++;
  scanf("%c",&c);
  while(c!='\n')
  {
	  scanf("%d",&m);
      for(i=m;i<1000;i++)
	  a[i]++;
	  scanf("%c",&c);
	  n++;
}
   scanf("%d",&m);
  for(i=m;i<1000;i++)
	  a[i]--;
   scanf("%c",&c);
   while(c!='\n')
  {
	  scanf("%d",&m);
      for(i=m;i<1000;i++)
	  {a[i]--;
	 
	  }
	  scanf("%c",&c);
   }  m=0;
   for(i=1;i<1000;i++)
	   if(a[i]>m)m=a[i];
	   printf("%d %d",n,m);
}

