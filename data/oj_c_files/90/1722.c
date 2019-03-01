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

int apple(int m,int n)
{
	int k;
	if(n==1)
		k=1;
	else if(m==1)
		k=1;
	else if(m==2)
		k=2;
	else if(m<n)
		k=apple(m,n-1);
	else
	k=apple(m,n-1)+apple(m-n,n);
	return k;
}
int main()
{
	int t,m,n,k;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		k=apple(m,n);
	    printf("%d\n",k);
	}
	
	return 0;
}
		