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
	int c,d,m[123]={0},n[123]={0},i,x,y;
	char a[100],b[100];
	scanf("%s%s",a,b);
	c=strlen(a);
	d=strlen(b);
	if(c!=d)
		y2;
	else
	{
		for(i=0;i<c;i++)
		{
			x=a[i];
			m[x]++;
			y=b[i];
			n[y]++;
		}
		for(i=65;i<=122;i++)
		{
			if(m[i]!=n[i])
				break;
		}
		if(i!=123)
			y2;
		else
			y1;
	}
}

