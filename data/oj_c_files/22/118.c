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
	int i,j,a[300],m1=0,m2=-129;
	scanf("%d",&a[0]);
	for(i=1;;i++)
	{  
		if(getchar()=='\n') break;
		scanf("%d",&a[i]);
	}
	if(i==1) printf("No");
	else
	{
		for(j=0;j<i;j++) if(m1<a[j]) m1=a[j];
		for(j=0;j<i;j++)
		{
			if(m2<a[j] && a[j]!=m1) 
				m2=a[j];
		}
		if(m2==-129) printf("No");
		else printf("%d",m2);
	}
}