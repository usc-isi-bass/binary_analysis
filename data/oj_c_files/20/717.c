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
	char str[14], sub[4],m;
	int d,i,l;
	while(scanf("%s %s",str,sub)!=EOF)
	{
		l=strlen(str);
		m=0;
		for(i=0;i<l;i++)
		{
			if(str[i]-m>0) 
			{
				d=i;
				m=str[i];
			}
		}
		for(i=l-1;i>d;i--) str[i+3]=str[i];
		for(i=0;i<3;i++) str[i+d+1]=sub[i];
		str[l+3]='\0';
		printf("%s\n",str);
	}
}