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
	char s[101];
	int i,a[100],c,j;
	scanf("%s",s);
	i=c=0;
	while(s[i]!='\0')
	{
		if(s[i]!=s[0])a[c++]=i;
		i++;
	}
	for(i=0;i<c;i++)
	{
		for(j=a[i];j>=0;j--)
		{
			if(s[j]==s[0])
			{
				s[j]=' ';
				printf("%d %d\n",j,a[i]);
				break;
			}
		}
	}
		return 0;
}
	
