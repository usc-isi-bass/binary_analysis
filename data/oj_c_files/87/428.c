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
	int i,a,b,c,d,e,f;
	int miao,fen,shi,s;
	for(i=1;i>0;i++)
	{
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&e==0&&d==0&&f==0)
	{
		break;
	}
	else
	{
	miao=60-c;
	fen=60-(b+1);
	shi=d+12-(a+1);
	s=shi*60*60+fen*60+miao+e*60+f;
	printf("%d\n",s);
	}
	}
	return 0;
}