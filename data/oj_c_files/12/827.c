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
	int s[16],i,n,a=0,j;
    scanf("%d",&s[0]);
	loop:
	a=0;
	i=1;
	do
	{
		scanf(" %d",&s[i]);
		i++;
	}
	while(s[i-1]!=0);
	n=i-1;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		if(s[i]==2*s[i+j]||s[i+j]==s[i]*2) a=a+1;
	}
	printf("%d\n",a);
	scanf("%d",&s[0]);
	if(s[0]!=-1) goto loop;
}
