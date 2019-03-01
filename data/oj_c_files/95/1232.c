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
	int h=0;
	char a[100],b[100],i;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i]&&a[i]!=b[i]+32&&a[i]!=b[i]-32)
		{if(a[i]>96&&b[i]>96&&a[i]>b[i])
		h=2;
		else if(a[i]<96&&b[i]<96&&a[i]>b[i])
		h=2;
		else if(a[i]<96&&b[i]<96&&a[i]<b[i])
		h=1;
		else if(a[i]>96&&b[i]>96&&a[i]<b[i])
		h=1;
		else if(a[i]>96&&b[i]<96&&a[i]>(b[i]+32))
		h=2;
		else if(a[i]>96&&b[i]<96&&a[i]<(b[i]+32))
		h=1;
		else if(a[i]<96&&b[i]>96&&a[i]>(b[i]-32))
		h=2;
		else if(a[i]<96&&b[i]>96&&a[i]<(b[i]-32))
		h=1;
	}} 
	if(h==0)
		printf("=");
	else if(h==1)
		printf("<");
	else if(h==2)
		printf(">");
	return(0);
	}