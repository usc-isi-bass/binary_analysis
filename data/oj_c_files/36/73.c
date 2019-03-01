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
{   int m=0,i,l,n=0;
	char a[20],b[20],*p1,*p2;
    scanf("%s",&a);
	scanf("%s",&b);
	p1=a;p2=b;
	int x,y;
	x=strlen(a);
	y=strlen(b);
	if (x!=y) 
		printf("NO\n");
	else
	{
		for(i=0;i<x;i++,p1++)
		{
			for(l=0;l<x;l++,p2++)
			{
			    if ((*p1)==(*p2)) n=1;
			}
		    if (n==0) m=0;
		    else m=1;
		    p2=b;
		}
	
	if (m==0) printf("NO\n");
	else printf("YES\n");
	}
}