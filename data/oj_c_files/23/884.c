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
	char a[100],b[50][20];
	gets(a);
	int len,i,j=0,t=0,m;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ') {b[t][j]=a[i];j++;m=t;}
		if(a[i]==' ') {b[t][j]='\0';t++;j=0;}
	}
	b[t][j]='\0';
	for(i=m;i>0;i--)
	printf("%s ",b[i]);printf("%s",b[0]);
}