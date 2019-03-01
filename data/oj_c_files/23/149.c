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
	char s[101],a[20][10]={0};
	int i,len,j,k;
	gets(s);
	len=strlen(s);
	j=k=0;
	for(i=0;i<len;i++)
	{   if(s[i]!=' ') a[k][i-j]=s[i];
		else {k++;j=i+1;}
	}
	for(k-1;k>0;k--)
		printf("%s ",a[k]);
	printf("%s",a[0]);
}