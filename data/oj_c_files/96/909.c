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
	char s[1000]; 
	int len,k=0,a[1000],l,i;
	gets(s);
	len=strlen(s);
	for (i=0;i<len;i++)
	{
		a[i]=(k*10+s[i]-'0')/13;
		k=(k*10+s[i]-'0')%13;
	}
	l=0;
	while (a[l]==0&&l<len-1) l++;
	for (i=l;i<len;i++)
		printf("%d",a[i]);
	printf("\n%d\n",k);
}