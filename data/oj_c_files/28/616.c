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
    char a[300][50],m;
	int i=1,j=0,n=0,b[300],t;
	
	for(;;)
	{
	    scanf("%s",a[i]);
		if((m=getchar())==' ')
		{
			i=i+1;
			n=n+1;
			continue;
		}
		else if(m=='\n')
		{
			n=n+1;
			break;
		}
	}
	for(i=1;i<n;i++)
	{
		t=strlen(a[i]);
		printf("%d,",t);
	}
    t=strlen(a[n]);
    printf("%d",t);
}
