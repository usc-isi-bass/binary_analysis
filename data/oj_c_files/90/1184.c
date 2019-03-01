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

int num(int m,int n);
int num1(int m,int n); 
int num2(int m,int n);
int num(int m,int n)
{
	//printf("num(%d,%d)\n",m,n);
	return num1(m,n)+num2(m,n);
}
int num1(int m,int n)
{	
	//printf("num1(%d,%d)\n",m,n);
	if(m==1||m==0||m<n)/*{printf("jump\n");*/return 0;
	else
	if(n==1)/*{printf("  +1\n");*/return 1;
	else
	return num(m,n-1);
}
int num2(int m,int n)
{
	//printf("num2(%d,%d)\n",m,n);
	if(n==1){/*printf("jump\n");*/return 0;}
	else
	if(m==0||m==1)
	{/*printf("  +1\n");*/return 1;}
	else
	if(m>=n)
		return num(m-n,n);
	else
		return num(m,m);
}
void main()
{
	int t,n,m,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		int j=num(m,n);
		printf("%d\n",j);
	}
}
