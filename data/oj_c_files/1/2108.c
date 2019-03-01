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

int fenjie(int x,int p);
int N;
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 {scanf("%d",&N);
	  printf("%d\n",fenjie(N,2));
	 }
	return 0;
}
int fenjie(int x,int p)
{
	int f=0;
	if(x==1)
	 return 1;
	else
	 {for(int i=p;i<=x;i++)
	   if(x%i==0)
	    f=f+fenjie(x/i,i);
	 }
	return f;
}