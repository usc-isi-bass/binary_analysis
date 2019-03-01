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

void tree(int a,int b)
{
	if(a==b) printf("%d",a);
	else
	if(a>b)
	{
		if(a>=2*b)
			tree(a/2,b);
		else
			tree(a/2,b/2);
	}
	else
		tree(b,a);
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	tree(x,y);
	return 0;
}
