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

int compare(char b[],int n,char a)
{
	int i,j;
	for(i=0;i<n;++i)
		if(a==b[i])
		{
			for(j=i;j<n-1-i;++j)
				b[j]=b[j+1];
			return(0);
		}
		else
			continue;
	return(1);		
}		
main()
{
	char a[100],b[100];
	int len1,len2,i,t=0;
	scanf("%s%s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1==len2)
	{
		for(i=0;i<len1;++i)
			if(compare(b,len2,a[i]))
			{
				printf("NO\n");
				t=1;
				break;
			}
		if(t==0)
			printf("YES\n");
	}
	else
		printf("NO\n");
}
	
