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
	char a[101],*p,s1[101];
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n+1;i++)
	{
		s1[i]='\0';
	}
p=a;
	for(i=0;i<n;i++)
	{
	if(i<n-1)
{
         s1[i]=*(p+i)+*(p+i+1);
	}
	else
{
	s1[i]=*(p+i)+*p;}	
printf("%c",s1[i]);
}
         return 0;
}




