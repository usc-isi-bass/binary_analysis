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

// ?????.cpp : ??????????????
//



int main()//(int argc, _TCHAR* argv[])
{
	int n,N;
	int a=0,b=0;
	scanf("%d",&N);
	for(n=1;n<=N;n++)
	{
		int A,B;
		scanf("%d%d",&A,&B);
		if((A==0&&B==1)||(A==1&&B==2)||(A==2&&B==0))a=a+1;
		else
		{
			if((B==0&&A==1)||(B==1&&A==2)||(B==2&&A==0))b=b+1;
			else ;
		}
	}
	if(a>b)printf("A\n");
	else
	{
		if(b>a)printf("B\n");
		else printf("Tie\n");
	}
	return 0;
}

