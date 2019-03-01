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

int find(int,int);
int find(int x,int y)
{
	int a;
	if(x>y) a=find(x/2,y);
	else if(x<y) a=find(x,y/2);
	else a=x;
	return a;
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",find(x,y));
	return 0;
}