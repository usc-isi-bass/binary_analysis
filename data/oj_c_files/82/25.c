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
	int n,i,h,l,a=0,b,x=0,e,k;
	int s[100]={0};
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
			scanf("%d%d\n",&h,&l);
		    if (h>=90&&h<=140&&l>=60&&l<=90)
			{
				a++;
			}
			else{
				a=0;
			}
			s[x]=a;
			x++;
	}
    for(k=1;k<100;k++)
	{
		for (x=0;x<100-k;x++)
		{
			if (s[x]>s[x+1])
			{
    			e=s[x];
				s[x]=s[x+1];
				s[x+1]=e;
			}
		}
	}

	printf("%d",s[99]);
    return(0);
}