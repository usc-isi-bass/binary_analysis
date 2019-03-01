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

char str[101];
int n=0;
void f(int m,char a,char b)
{
	if(m==0)
		return;
	int i=0,j=0;
	for(;i<n;i++)
		if(str[i]==b)
			break;
	for(j=i;j>=0;j--)
	{
		if(str[j]==a)
		{
			printf("%d %d\n",j,i);
			str[i]='*';
			str[j]='*';
			break;
		}
		else
			continue;
	}
	return f(m-1,a,b);
}
int main()
{
	scanf("%s",str);
	n=strlen(str);
	f(n/2,str[0],str[n-1]);
	return 0;
}