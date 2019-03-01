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
	char s1[50];
	char s2[50];
	int i,k,x=0,m;
	char c;
	scanf("%s",s1);
	scanf("%s",s2);
	for(i=0;(c=s2[i])!='\0';i++)
	{
		if(s1[0]==s2[i])
		{
			for(k=i+1;k<strlen(s1);k++)
			{
				if(s1[k-i]!=s2[k])
				{
					x=1;
				}
			}
			if(x!=1)
			{
				m=i;
				break;
			}
		}
	}
	printf("%d",m);
	return 0;
}