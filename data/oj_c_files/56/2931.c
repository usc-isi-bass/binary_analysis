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

void main ()
{
	int n,s[5];
	scanf("%d",&n);
	if(n>=1&&n<=9)
		printf("%d\n",n);
		else if(n>=11&&n<=99)
	{
		s[0]=n/10;
	    s[1]=n-s[0]*10;
		printf("%d%d\n",s[1],s[0]);
	}
	else if(n>=111&&n<=999)
	{
		s[0]=n/100;
		s[1]=(n-s[0]*100)/10;
		s[2]=n-s[0]*100-s[1]*10;
		printf("%d%d%d\n",s[2],s[1],s[0]);
	}
	else if(n>=1111&&n<=9999)
	{
		s[0]=n/1000;
		s[1]=(n-s[0]*1000)/100;
		s[2]=(n-s[0]*1000-s[1]*100)/10;
		s[3]=n-s[0]*1000-s[1]*100-s[2]*10;
		printf("%d%d%d%d\n",s[3],s[2],s[1],s[0]);
	}
	else if(n>=11111&&n<=99999)
	{
		s[0]=n/10000;
		s[1]=(n-s[0]*10000)/1000;
		s[2]=(n-s[0]*10000-s[1]*1000)/100;
		s[3]=(n-s[0]*10000-s[1]*1000-s[2]*100)/10;
		s[4]=n-s[0]*10000-s[1]*1000-s[2]*100-s[3]*10;
		printf("%d%d%d%d%d\n",s[4],s[3],s[2],s[1],s[0]);
	}
}