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
	char s1[100],s2[100];
	int i,j,l1,l2,o=0;
	scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	{
	    for(i=0;s1[i]!='\0';i++)
			for(j=0;s2[j]!='\0';j++)
			{
								if(s2[j]=='0') continue;
				if(s1[i]==s2[j])
				{
					s2[j]='0';
					o++;
					break;
				}
			}
			if(o==l1)
				printf("YES\n");
			else
				printf("NO\n");
	}
	else
		printf("NO\n");
}

