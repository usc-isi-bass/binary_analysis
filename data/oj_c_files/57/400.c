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
char a[100][100];
char b[100][100];
int len[100],i,j,n,num;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%s",a[i]);
}
for(i=0;i<n;i++)
	{
		len[i]=strlen(a[i]);

		if(a[i][len[i]-1]=='r'||a[i][len[i]-1]=='y')
		{
			a[i][len[i]-2]=0;
		}
		if(a[i][len[i]-1]=='g')
		{
		a[i][len[i]-3]=0;
		}
	}
for(i=0;i<n;i++)
{
	printf("%s\n",a[i]);
}
	return 0;
}