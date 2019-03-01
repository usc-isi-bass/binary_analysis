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
	int a,b,c,i,n=0;
	scanf("%d %d %d",&a,&b,&c);
	int m[11]={31,0,31,30,31,30,31,31,30,31,30};
	if(a%4==0&&a%100!=0||a%100==0&&a%400==0)
		m[1]=29;
	else
		m[1]=28;
	if(b==1)
		n=c;
	else
	{
		for(i=0;i<b-1;i++)
			n=n+m[i];
		n=n+c;
	}
	printf("%d\n",n);
	return 0;
}