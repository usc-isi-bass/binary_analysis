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
	int a[16],i,j,s,t;
	for(;;)
		{s=0;
	    scanf("%d",&a[0]);
	    if(a[0]==-1)break;
		for(i=1;;i++)
	         {scanf("%d",&a[i]);
	          if(!a[i])break;}
		t=i;
		for(i=0;i<t;i++)
			for(j=0;j<t;j++)
				if(a[j]==(2*a[i]))
					s+=1;
	     printf("%d\n",s);}
}