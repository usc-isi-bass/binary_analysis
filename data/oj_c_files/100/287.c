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
	char c[300];
	int n[26]={0};
	gets(c);
	int i,t,k=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]>=97&&c[i]<=122)
		{
			t=c[i]-97;
			n[t]=n[t]+1;
			k=k+1;
		}
	}
	if(k==0)printf("No");
	for(t=0;t<26;t++)
	{
		if(n[t]>0)
		{
			printf("%c=%d",t+97,n[t]);
			k=k-1;
			if(k>0)printf("\n");
		}
	}
}

