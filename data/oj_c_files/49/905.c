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
	char s[500];
	char *p;
	int i,l,j,k,m;
	scanf("%s",s);
	l=strlen(s);
	for(i=2;i<l+1;i++)
	for(j=0;j<=l-i;j++)
	{
	k=0;
	m=i-1;
	for(p=s+j;p<s+j+i;p++)
	{
	if(*p!=*(p+m)) k++;
	m=m-2;
	}
	if(k==0)
	{
	for(p=s+j;p<s+j+i;p++)
	printf("%c",*p);
	printf("\n");
	}
	}
	return 0;
}