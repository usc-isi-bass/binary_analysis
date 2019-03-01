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
	char s[50],w[50],p[50];
	int i,j,flag=1;
	scanf("%s",s);
	scanf("%s",w);
	for(i=0;i<strlen(w);i++)
	{
		for(j=0;j<strlen(s);j++)
		{
			p[j]=w[i+j];
		}
		flag=1;
		for(j=0;j<strlen(s);j++)
		{
			if(p[j]!=s[j]) flag=0;
		}
		if(flag!=0)
		{
			printf("%d",i);
			break;
		}
	}
}

