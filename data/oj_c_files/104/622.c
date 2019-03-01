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


int common(int a,int b);
void main()
{
    int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",common(x,y));
}
int common(int a,int b)
{
	if(a==b) return a;
	if(a>b) return common(a/2,b);
	return common(a,b/2);
}