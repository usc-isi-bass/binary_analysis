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
	char c[301];
	int n,i,big[26]={0},small[26]={0},flag=0;
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]>=65&&c[i]<=90)
		{
			big[c[i]-65]++;
			flag=1;
		}
		else if(c[i]>=97&&c[i]<=122)
		{
			small[c[i]-97]++;
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("No");
	}
	else
	{
	for(i=0;i<26;i++)    
	{
		if(big[i]!=0)
		{
			printf("%c=%d\n",i+65,big[i]);
		}
	}
	for(i=0;i<26;i++)
	{
		if(small[i]!=0)
		{
			printf("%c=%d\n",i+97,small[i]);
		}
	}
	}
	return 0;
}




