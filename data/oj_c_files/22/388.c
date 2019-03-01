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
	unsigned int a[300];
	char ch[299];
	int s=1;
	int i;
	for(i=1;i<=300;i++)
	{
		if(i==1) scanf("%u",&a[1]);
		else 
		{
			ch[i]=getchar();
			if(ch[i]!=',') break;
			else 
			{
				scanf("%u",&a[i]);
				s=s+1;
			}
		}

	}
	int exchange,j,k;
	for(j=1;j<=s;j++)
		for(k=j+1;k<=s;k++)
		{
			if(a[j]<a[k]) 
			{
                exchange=a[j];
				a[j]=a[k];
				a[k]=exchange;
			}
		}
	if(s==1) printf("No");
	else
	{
		for(i=1;i<=s-1;i++)
		{
		    if(a[i]!=a[i+1]) 
			{
				printf("%d",a[i+1]);
				break;
			}
		    else 
			{
				if(i==s-1) printf("No");
                else continue;
			}
		}
    }

	return 0;


}