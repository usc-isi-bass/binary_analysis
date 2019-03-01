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
	
	char s[1000];
	scanf("%s",s);
	char boy=s[0];
	int m[1000]={0};
	int i,j=0;
	for(i=0;s[i];i++)
	{
		if(s[i]==boy)
		m[j++]=i;
		else if(s[i]!=boy)
			printf("%d %d\n",m[--j],i);
	}
	return 0;
}