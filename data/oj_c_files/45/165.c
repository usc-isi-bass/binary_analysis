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
	char a[100],b[100];
	int j=0;
	int c[100];
	int length1,length2;
	int i,k,m,s;
	scanf("%s%s",a,b);
    length1=strlen(a);
    length2=strlen(b);
	for(i=0;i<length2;i++)
	{
		if(a[0]==b[i])
		{

			c[j]=i;
			j++;
		}
	}
	for(k=0;k<j;k++)
	{
		s=c[k];
	
		for(m=0;m<length1;m++)
		{
			
			if(a[m]==b[c[k]])
			{
				
				c[k]++;
			}
			else
			{
				break;
			}
			
		}
		if(m>=length1)
		{
			printf("%d",s);
			break;
		}


	}
	return 0;
	
}
