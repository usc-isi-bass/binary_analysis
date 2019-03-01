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

int erchashu(int a,int b)
{
	if(a==b) return(a);
	if(a>b) return(erchashu(a/2,b));
	if(a<b) return(erchashu(a,b/2));
}
void main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=erchashu(a,b);
	printf("%d",c);
}