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


//????????????????????????????

//?a??????????min???
//?????????????
int F(int min,int a)
{
	int i;
	int sum=0;
	if(min==a)      //????????
		return 1;
	if(a==1)
		return 1;     //???????
	for(i=min;i<=a;i++)
	{
		if(a%i==0)
			sum+=F(i,a/i);   //??????????
	}
	return sum;    //???
}

int main()
{
	int a,n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a);
	    printf("%d\n",F(2,a));
	}
	return 0;
}