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

int fun(int x,int y)
{
	int i,sum=0;
	for(i=x;i*i<=y;i++)
		if(y%i==0) {sum++;sum+=fun(i,y/i);}
    return sum;
}
int main()
{
	int n,i,sum;
	scanf("%d",&n);
	while(n>0)
	{	n--;
		scanf("%d",&i);sum=1;
		sum+=fun(2,i);
		printf("%d\n",sum);
	}
	return 0;
}