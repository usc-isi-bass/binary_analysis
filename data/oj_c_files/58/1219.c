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
	int n,i,j,k;
	scanf("%d",&n);
	char s[n][81],c;
	c=getchar();
	int ss[n];
	for(i=0;i<n;i++) ss[i]=1; 
	for(i=0;i<n;i++)
	{
		gets(s[i]);
		int S=strlen(s[i]);
		if(s[i][0]=='_'||(s[i][0]<='Z'&&s[i][0]>='A')||(s[i][0]<='z'&&s[i][0]>='a'))
		{
			for(j=1;j<S;j++)
			{
				if(s[i][j]=='_'||(s[i][j]<='Z'&&s[i][j]>='A')||(s[i][j]<='z'&&s[i][j]>='a')||(s[i][j]<='9'&&s[i][j]>='0')) ss[i]=ss[i]*1;
				else ss[i]=0;
			}
		}
		else ss[i]=0;
		printf("%d\n",ss[i]);
	}
}