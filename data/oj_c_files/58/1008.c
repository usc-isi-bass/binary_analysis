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
	char *str[100],p[2];
	int i,j,n;
	scanf("%d",&n);
	gets(p);
	for(i=0;i<n;i++)
		str[i]=(char *)malloc(124*sizeof(char));
	for(i=0;i<n;i++)
		gets(str[i]);
	for(i=0;i<n;i++)
	{
		if(**(str+i)>='a'&&**(str+i)<='z'||**(str+i)>='A'&&**(str+i)<='Z'||**(str+i)=='_')
		{	
			for(j=0;*(*(str+i)+j)!='\0';j++)
			{
				if(!(*(*(str+i)+j)>='a'&&*(*(str+i)+j)<='z'||*(*(str+i)+j)>='A'&&*(*(str+i)+j)<='Z'||*(*(str+i)+j)=='_'||*(*(str+i)+j)>='0'&&*(*(str+i)+j)<='9'))
					break;
			}
			if(*(*(str+i)+j)!='\0')printf("0\n");
			else printf("1\n");
		}
		else printf("0\n");
	}
}
