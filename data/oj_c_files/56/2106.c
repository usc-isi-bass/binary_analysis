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
	int n,i,j=0,t;
	char a[6];
	scanf("%s",a);
	for(i=0;i<6;i++)
	{
		if(a[i]=='\0')
			break;
		j=j+1;	
	}
	for(i=0;i<=(j-1)/2;i++)
	{
		t=a[j-1-i];
		a[j-1-i]=a[i];
		a[i]=t;
	}
	for(i=0;i<=j;i++)
	{
		if(a[i]=='\0')
			break;
		printf("%c",a[i]);
	}
	return 0;
}