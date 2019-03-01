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
	char str[15],substr[5],a;
	int i,j,n,m,l;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		n=strlen(substr);
		m=strlen(str);
		a=0;
		for(i=0;i<m;i++)
		{
			if(a<str[i])
				a=str[i];
		}
		for(j=0;;j++)
		{
			if(a==str[j])
				break;
		}
		for(l=m-1;l>=j+1;l--)
			str[l+n]=str[l];
		for(l=j+1;l<=j+n;l++)
			str[l]=substr[l-j-1];
		str[m+n]='\0';
		printf("%s\n",str);
	}
}