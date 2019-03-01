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
	int n,i,l[210];
	char a[210][30];
	scanf("%d",&n);
	for(i=0;i<n;i++)   scanf("%s",a[i]);
    for(i=0;i<n;i++)   l[i]=strlen(a[i]);

	

	int p1,p2;
	p1=l[0];
	for(i=0;i<n;i++)
	{
	      if(l[i]>=p1)  p1=l[i];
	}
	p2=p1;
	for(i=0;i<n;i++)
		if(l[i]<=p2)   p2=l[i];
	

	
	for(i=0;i<n;i++)
	{
	    if(l[i]==p1)
		{
		     printf("%s\n",a[i]);
			 break;
		}
	}
    for(i=0;i<n;i++)
	{
	    if(l[i]==p2)
		{
		     printf("%s",a[i]);
			 break;
		}
	}
	return 0;
}
