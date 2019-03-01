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

int fuc(int b[100],int m)
{
	int i,t;
	b[0]=m;
	for(i=1;b[i-1]!=1;i++)
	{	b[i]=(b[i-1]-b[i-1]%2)/2;
	}
	return (i-1);
}
void main()
{
	int i,j,m,n,a[100],b[100];
	scanf("%d %d",&m,&n);
	i=fuc(a,m);
	j=fuc(b,n);
	for(;a[i]==b[j];i--,j--);
	printf("%d",a[i+1]);
}
