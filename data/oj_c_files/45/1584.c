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
	int i,n,j=0,x,y,c[100],k=0,m=0;
	char a[50],b[50];
	scanf("%s %s",a,b);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<y-x+1;i++)
	{
		for(j=0;j<x;j++)
		{	if(a[j]==b[i+j]) m++;}
		if(m==x) 
		{ c[k]=i;k++;}
		m=0;
	}
	printf("%d\n",c[0]);

}