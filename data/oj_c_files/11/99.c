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
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	static int d[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	if(a%4==0&&a%100!=0||a%100==0)
		d[2]=29;
	else 
		d[2]=28;
	int i,sum=0;
	for(i=1;i<b;i++)
	{
		sum+=d[i];
	}
	sum+=c;
	printf("%d",sum);
	return 0;
}

