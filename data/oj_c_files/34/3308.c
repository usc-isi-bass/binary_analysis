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
	void jiaogu(int n);
	int n,*a,k,j,i,max,t,s;
	scanf("%d",&n);
	jiaogu(n);
}
void jiaogu(int n)
{
	int i;
	if (n==1) printf("End");
	else if(n%2==0)  {i=n/2;printf("%d/2=%d\n",n,i);jiaogu(i);}
	else  {i=n*3+1;printf("%d*3+1=%d\n",n,i);jiaogu(i);}
}