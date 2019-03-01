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

void main()
{
	int a(int x,int y);
	int x,y,z;
	scanf("%d %d",&x,&y);
	z=a(x,y);
	printf("%d\n",z);
}

int a(int x,int y)
{
	int m;
	if(x==y) m=x;
	else if(x<y) m=a(x,y/2);
	else m=a(x/2,y);
	return(m);
}
