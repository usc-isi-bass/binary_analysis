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

int f(char a[],char b[],int i)
{
	int j,s=1;
	for(j=0;a[j]!=0;j++)
	{if(a[j]!=b[i+j]){s=0;break;}}
	return(s);}
int main()
{
	char a[60],b[60];
	int i,m,n;
	scanf("%s",a);m=strlen(a);
	scanf("%s",b);n=strlen(b);
	for(i=0;i<=n-m;i++)
		if(f(a,b,i)==1)break;
	printf("%d",i);
}


	