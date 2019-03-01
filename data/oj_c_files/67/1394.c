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
	int n,i=0,x,y;
	double s[100];
	scanf("%d",&n);
	scanf("%d %d",&x,&y);
	s[0]=(double)y/x;
	for(i=1;i<n;i++)
	{
	scanf("%d %d",&x,&y);
	s[i]=(double)y/x;
	if(s[i]-s[0]>0.05)
		{printf("better\n");}
		else 
			if(s[0]-s[i]>0.05)
				{printf("worse\n");}
				else {printf("same\n");}
	}

   return 0;
}