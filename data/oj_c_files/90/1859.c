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
{   int count(int m,int n);
	int t,m,n,z;
	scanf("%d",&t);
	while(t>0)
	{
	scanf("%d%d",&m,&n);
    z=count(m,n);
	printf("%d\n",z);
	t--;}
    return 0;
}
int count(int m,int n)
{   
	if((n==1)||(m==1)) return(1);
	else if(n>m) return(count(m,n-1));
	else if(n==m) return(1+count(m,n-1));
	else return(count(m,n-1)+count(m-n,n));
}
