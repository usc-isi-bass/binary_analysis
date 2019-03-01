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
	char a[20],b[20];
	int i,k=1,t[20]={0},j;
	scanf("%s %s",a,b);
	if((strlen(a))!=(strlen(b)))
		k=0;
	else 
	{
		for(j=0;j<strlen(a);j++)
		{
			for(i=0;i<strlen(a);i++)
			{
				if(a[j]==b[i])
				{
					b[i]=0;
                    t[j]=1;
					break;
				}
				if(t[j]==1)
					break;
			}
		}
	}
	for(j=0;j<strlen(a);j++)
	{
		if(t[j]==0)
		{
			k=0;
			break;
		}
	}
	if(k==1)
		printf("YES");
	if(k==0)
		printf("NO");
}
		



