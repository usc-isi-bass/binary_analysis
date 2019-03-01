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

main()
{
	int t,m,n;
	int f(int x,int y);
	scanf("%d",&t);
	while(t--)
	{
       scanf("%d %d",&m,&n);
	   printf("%d\n",f(m,n));
	}
	return 0;
}
int f(int x,int y)
{
	int s;
	s=0;
	if(y>1&&x-y>=0) s=s+f(x,y-1)+f(x-y,y);
	else if(y>1) s=s+f(x,y-1);
	else s=s+1;
	return (s);
}
