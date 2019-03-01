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

int reverse(int n)
{
	int i,m,re[10]={0};
	if(n>0)
	{
		for(m=0;n!=0;m++){re[m]=n%10;n=n/10;}
        for(i=0,n=0;i<m;i++)n=n*10+re[i];
		for(i=0;i<10;i++)re[i]=0;
	}
	if(n==0||n==-0)n=0;
	if(n<0)
	{
		n=-n;
        for(m=0;n!=0;m++){re[m]=n%10;n=n/10;}
        for(i=0,n=0;i<m;i++)n=n*10+re[i];
		n=n*(-1);
		for(i=0;i<10;i++)re[i]=0;
	}
	return(n);
}
void main()
{
	int i,s[6];
	for(i=0;i<6;i++)
		scanf("%d",&s[i]);
	for(i=0;i<6;i++)
		printf("%d\n",reverse(s[i]));
}
