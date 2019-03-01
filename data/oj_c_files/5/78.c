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
	char a[500]={'0'},b[500]={'0'};
	double n,flag=0;
	int i,j,k,check;
	scanf("%lf",&n);
	scanf("%s",a);
	scanf("%s",b);
	int la=strlen(a),lb=strlen(b);
	if(la!=lb)	{printf("error\n");	return 0;}
	for(i=0;i<la;i++)
	{	
		if(!(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G'||b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G'))
		{
			printf("error\n");
			return 0;
		}
	}
	for(i=0;i<la;i++)
	{
		if(a[i]==b[i])	flag++;
	}
	flag=(double)flag/la;
	if(flag>n)	printf("yes\n");
	if(flag<=n)	printf("no\n");
	return 0;
}

