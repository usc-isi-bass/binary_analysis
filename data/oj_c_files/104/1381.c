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

int step(int x1,int y1)
{
	if(x1==y1) return x1;
	if(x1>y1)
	{if(x1%2==0) return step(x1/2,y1);
	else return step((x1-1)/2,y1);
	}
	if(x1<y1)
	{if(y1%2==0) return step(x1,y1/2);
	else return step(x1,(y1-1)/2);
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<step(x,y)<<endl;
	return 0;
}