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
	int i=0,j=0,x=0,m=0;
	int a[20];
  	while(scanf("%d",&a[i]),a[i]!=-1)
	{while(scanf("%d",&a[i+1]),a[i+1]!=0)
	{i++;}
     for(m=0;a[m]!=0;m++)
	  for(j=m;a[j]!=0;j++)
	 {
		 if(a[m]==2*a[j]||a[j]==2*a[m])
		 x=x+1; 
	 }
		 printf("%d\n",x);
		 x=0;
		 i=0;
	}
	return 0;
}
