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
	char c[1000];
	int n,i=0,j,a[1000]={0};
	gets(c);
	n=strlen(c);
	for(j=0;j<n;j++)
		if(c[j]>96)c[j]=c[j]-32;
	while(i<n)
	for(j=0;j<n-i;j++)
	{
		if(c[i]==c[i+j])
		{
			a[i]++;
			if(i+j==n-1)goto loop;
		}
		else {i=i+j;break;}
	}
loop:for(i=0;i<n;i++)
	if(a[i]!=0)printf("(%c,%d)",c[i],a[i]);
	return 0;
}
	





	

