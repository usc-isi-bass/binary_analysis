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

void main()
{
	int a,k,i,n;
	int zhaodao(int a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

	scanf("%d",&a);
	k=zhaodao(a);
	printf("%d\n",k);
	}
}
int zhaodao(int a)
{
	if(a==1||a==2)
		return(1);
	else
		return(zhaodao(a-1)+zhaodao(a-2));
}
