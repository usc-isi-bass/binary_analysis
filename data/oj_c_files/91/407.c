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
	int i,s,n;
	char c[1000];
	for(i=0,n=0;;i++)
	{
		scanf("%c",&c[i]);
		if(c[i]=='\n')break;
		n++;
	}
	for(i=0;i<n-1;i++)
	{
		s=c[i]+c[i+1];
		printf("%c",s);
	}
	s=c[n-1]+c[0];
	printf("%c",s);
	return 0;
}