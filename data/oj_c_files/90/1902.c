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

int bai(int m,int n);
int main()
{
	int m[100],n[100],b[100],a,i;
	scanf("%d",&a);
	for(i=0;i<a;i++) scanf("%d %d",&m[i],&n[i]);
	for(i=0;i<a;i++) b[i]=bai(m[i],n[i]);
	for(i=0;i<a-1;i++) printf("%d\n",b[i]);
	printf("%d",b[a-1]);
	return 0;
}
int bai(int m,int n)
{
	int x=0;
	if(n==1) x=1;
	else 
	{
		if(m<n) x=bai(m,n-1);
		else x=bai(m,n-1)+bai(m-n,n);
	}
	return x;
}
