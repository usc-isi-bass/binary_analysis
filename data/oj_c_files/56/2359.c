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
	int n,i,m,t;
	scanf("%d",&n);
	for(i=1;i<10;i++)
	{
		t=(int)pow(10,i);
		if(n/t<1)
		{
			m=i;
			break;
		}
	}
	t=0;
	for(i=0;i<m;i++)
	{
		t=t*10+n%10;
		n=(n-n%10)/10;	
	}
	printf("%d",t);
}

	