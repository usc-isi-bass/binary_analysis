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
	char s[50],w[50],m[50];
	int i,j,l,t;
	scanf("%s%s",s,w);
	l=strlen(s);
	t=strlen(w);
	for(i=0;i<t;i++)
	{
		if(w[i]==s[0])
		{
			for(j=0;j<l;j++)
				m[j]=w[i+j];
			m[j]='\0';
			if(strcmp(m,s)==0)
			{
				printf("%d",i);
				break;
			}
		}
	}
}
