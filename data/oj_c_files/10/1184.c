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
	int f(int a[],int n);
	int a[30],n,i,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	s=f(a,n);
	printf("%d",s);
}

int f(int a[],int n)
{   int max(int x,int y);
int g(int a[],int n,int b);
	if(n==0)return(0);else
return(max(g(a+1,n-1,a[0])+1,f(a+1,n-1)));}

int g(int a[],int n,int b)
{   int max(int x,int y);
	if(n==0)return(0);else
	if(n==1)
    if(a[0]>b)
	return(0);
	else
	return(1);
	else
	if(a[0]>b)
	return(g(a+1,n-1,b));
	else
		return(max(g(a+1,n-1,b),g(a+1,n-1,a[0])+1));}
int max(int x,int y)
{
	return(x>y?x:y);

}