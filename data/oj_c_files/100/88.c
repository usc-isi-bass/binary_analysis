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
	int a[26]={0},i,t=0;
	char c[100];
	gets(c);
	for(i=0;c[i]!='\0';i++)
    {
		if(c[i]>=97&&c[i]<=122)
		a[c[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{t=1;break;}
	}
	if(t==0)
		printf("No\n");
	else 
	for(i=0;i<26;i++)
	if(a[i])
	printf("%c=%d\n",i+97,a[i]);
}