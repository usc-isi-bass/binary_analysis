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

int devide(int x,int y)
{
    if(y==1)
	{
		return 1;
	}

	else if(x==1)
	{
		return 1;
	}
	else if(x<y)
	{
		return devide(x,x);
	}
	else if(x>y)
	{
		return devide(x,y-1)+devide(x-y,y);
	}
	else if(x==y)
	{
		return devide(x,y-1)+1;
	}
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int x,y;
    int out;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d %d",&x,&y);
        out=devide(x,y);
        printf("%d\n",out);
    }
}
