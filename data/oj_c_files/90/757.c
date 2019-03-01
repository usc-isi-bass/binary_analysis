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


int sd(int n,int m)
{
	if(n==1)
	{return 1;}
	if(m==1)
	{return 1;}
	if(n<m&&n>=2)
	{return sd((n-1),m)+sd(n,(m-n));}
	if(m<=n&&m>1)
	{return sd(m-1,m)+1;}
	
	
}


int main()
{
	int a;
	scanf("%d",&a);
	int m[100];
	int n[100];
	int d[100];
	int i=0;
	do
	{
		scanf("%d %d",&m[i],&n[i]);
		i++;
	}while(i<a);
	i=0;
	do
	{

		printf("%d\n",sd(n[i],m[i]));
		i++;
	}while(i<a);
	return 0;
}
	