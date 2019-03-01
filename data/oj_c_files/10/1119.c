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

int n;
static int c[25];
int max(int a,int b)
{
	if(a>=b)
	return (a);
	else return (b);
}
int f(int mx,int st)
{
	for(;st<n;st++)
	if(c[st]<=mx)
	return (max(f(c[st],st+1)+1,f(mx,st+1)));
	return  0;
}
int main()
{
	int i,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&c[i]);
	s=f(4000,0);
	printf("%d",s);
}