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
	int a,b,c,i,j,k,m;
	char s[256],s1[256],s2[256];
	gets(s);
	gets(s1);
	gets(s2);
	a=strlen(s);
	b=strlen(s1);
	c=strlen(s2);
	for(i=0;i<a;i++)
	{
		if(s[i]==s1[0])
		{
			for(j=0;j<b;j++)
			{
				if(s[i+j]!=s1[j])break;
			}
			if(s[i+b-1]==s1[b-1])
			{
				m=i;
				for(k=0;k<m;k++)
					printf("%c",s[k]);
					printf("%s",s2);
					for(k=i+b;k<a;k++)
						printf("%c",s[k]);
					break;
			}
		}
	}
	if(i==a)printf("%s",s);
}
		
