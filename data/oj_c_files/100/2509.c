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
	char a[301];
	int b,i,j,k,n,jihao=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<26;i++)
	{
		b=0;
		for(j=0;j<n;j++)
		{
			if(a[j]=='A'+i)
			{
				b=b+1;
				jihao=1;
			}
		}
		if(b!=0)printf("%c=%d\n",'A'+i,b);
	}
	for(i=0;i<26;i++)
	{
		b=0;
		for(j=0;j<n;j++)
		{
			if(a[j]=='a'+i)
			{
				b=b+1;
				jihao=1;
			}
		}
		if(b!=0)printf("%c=%d\n",'a'+i,b);
	}
	if(jihao==0)printf("No");
}