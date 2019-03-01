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
	char s[256],w[256],r[256];
	int l1,l2,i,j,count,k=0;
	scanf("%s%s%s",w,s,r);
	l1=strlen(s);
	l2=strlen(w);
	for (i=0;i<l2-l1+1;i++)
	{
		if (w[i]==s[0])
		{
			count=1;
			for(j=i+1;j<i+l1;j++)
			{
				if (w[j]!=s[j-i])
					break;
				else count++;
			}
			if (count==l1) 
			{
				k=1;
				break;
			}
		}
	}
	if(k==1)
	{
	for (j=i;j<i+l1;j++)
	{
		w[j]=r[j-i];
	}
	}
	printf("%s\n",w);
}