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

main()
{
	int i,n=0,k;
	char bs[1000];
	scanf("%s",bs);
	int a[1000];
	char cs[1000];
	for(i=0;bs[i]!='\0';i++)
	{
		if(bs[i]>='a'&&bs[i]<='z')
		bs[i]=bs[i]-'a'+'A';
		a[i]=1;
	}
	cs[0]=bs[0];
	for(i=1;bs[i]!='\0';i++)
	{
		if(bs[i]==cs[n])
		{
		a[n]++;
		}
		else
		{
			n++;
			cs[n]=bs[i];
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("(%c,%d)",cs[i],a[i]);
	}
}