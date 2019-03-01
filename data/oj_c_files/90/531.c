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

int fangfa(int m,int n)
{
	if(n==1)
		return 1;
	if(m>n)
		return(fangfa(m,n-1)+fangfa(m-n,n));
	else if(m==n)
		return(fangfa(m,n-1)+1);
	else
		return(fangfa(m,n-1));
}
void apple()
{
	int m=0,n=0;
	scanf("%d%d",&m,&n);
	printf("%d\n",fangfa(m,n));
}
void main()
{
	int t=0,i=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		apple();
}