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
	char str[13],substr[3],out[50][13];
	int maxasc(char a[13]);
	int n,i,max;
	for (n=0;;n++)
	{
		if(scanf("%s",str)==EOF) break;
		scanf("%s",substr);
		max=maxasc(str);
		for(i=strlen(str);i>max;i--)
		{
			str[i+3]=str[i];
		}
		str[max+1]=substr[0];
		str[max+2]=substr[1];
		str[max+3]=substr[2];
		strcpy(out[n],str);
	}
	for(i=0;i<n;i++)
		puts(out[i]);
}
int maxasc(char a[13])
{
	int result,i;
	for(i=0,result=0;i<strlen(a);i++)
		if(a[i]>a[result])
			result=i;
	return result;
}

