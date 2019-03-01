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
	char a[500];
	int i,j,k,m,x,y;
	scanf("%s",a);
	m=strlen(a);
	for(i=2;i<=m;i++)
	for(j=0;j<=m-i;j++)
	{
	for(k=0,x=0;k<i/2;k++)
	{
	if(a[j+k]==a[j+i-1-k])
	x=1;
	else
	{
	x=0;
	break;
	}
	}
	if(x==1)
	{
	for(y=j;y<=j+i-1;y++)
	printf("%c",a[y]);
	printf("\n");
	}
	x=0;
	}
}