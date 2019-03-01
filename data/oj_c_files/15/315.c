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
	int n,feiwu,x,l,s,i;
	scanf("%d",&n);
	for(i=0;i<n*n;i++)
	{
		scanf("%d",&feiwu);
		if(feiwu==0)
		{x=i+1;break;}
	}
	for(i++;i<n*n;i++)
	{
		scanf("%d",&feiwu);
		if(feiwu!=0)
		{l=i;break;}
	}
	s=l-x+1;
    for(i++;i<n*n;i++)
	{
		scanf("%d",&feiwu);
		if(feiwu==0)
			s++;
	}
	printf("%d",(l-x-1)*(s-2*(l-x+1))/2);
	return 0;
}
