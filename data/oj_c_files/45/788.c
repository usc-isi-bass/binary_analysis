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
	int i,j,n,m,a;
	char s1[50],s2[50];
	scanf("%s %s",s1,s2);
	n=strlen(s1);
	m=strlen(s2);
	for(j=0;j<m;j++)
	{
		if(s1[0]!=s2[j])
			continue;
		a=j;
		if(s1[0]==s2[j])
		{
			for(i=1;i<n;i++,j++)
			{
				if(s1[i]!=s2[j+1])break;
			}		
		}
		break;
	}
	printf("%d\n",a);
	return 0;
}
