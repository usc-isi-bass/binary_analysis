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

struct monkey
{
	int n;
	int m;
};
struct monkey mon[100];
void main()
{    int i=0,j;
     int b[100];
	 int wang(int a,int c);
	do
	{ scanf("%d%d",&mon[i].n,&mon[i].m);
	i++;}while(mon[i-1].n!=0&&mon[i-1].m!=0);
	for(j=0;j<i-1;j++)
	{
		b[j]=wang(mon[j].n,mon[j].m);
	}
	for(j=0;j<i-1;j++)
		printf("%d\n",b[j]);
}
int wang(int a,int c)
{
	int s=0,i;
	for(i=2;i<=a;i++)
		s=(s+c)%i;
	return(s+1);
}