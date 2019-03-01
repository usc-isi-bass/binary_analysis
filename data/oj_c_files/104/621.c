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


void common(int a,int b);
void main()
{
    int x,y;
	scanf("%d %d",&x,&y);
	common(x,y);
}
void common(int a,int b)
{
	if(a==b) printf("%d",a);
    else if((a/2)==b) printf("%d",b);
    else if(a==(b/2)) printf("%d",a);
    else if(a/2>b) common(a/2,b);
	else if(b/2>a) common(a,b/2);
    else common(a/2,b/2);
}