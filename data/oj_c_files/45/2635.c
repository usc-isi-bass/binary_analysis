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
	char a[50],b[50],temp[50];
	int i,j,len1,len2,p;
	scanf("%s %s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<=len2-len1;i++)
	{
		p=1;
		for(j=i;j<i+len1;j++)
			temp[j-i]=b[j];
		for(j=0;j<len1;j++)
			if(temp[j]==a[j])
				p=1;
			else
			{
				p=0;
				break;
			}
		if(p)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}