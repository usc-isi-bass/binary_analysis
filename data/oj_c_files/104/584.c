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

int choose(int x,int y)
{
	if(x==y)return x;
	if(x>y)return choose(x/2,y);
	else return choose(x,y/2);
}
void main()
{
	int choose(int x,int y);
	int m,n,k;
	scanf("%d%d",&m,&n);
	k=choose(m,n);
	printf("%d\n",k);
}
