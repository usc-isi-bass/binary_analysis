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

int find(char a,int b,int c);
int main()
{
	char d;
	scanf("%c",&d);
	find(d,0,1);
//	return 0;
}
int find(char a,int b,int c)
{
	char t;
    scanf("%c",&t);
	while(t==a)
	{
		c=find(a,c,c+1);
		scanf("%c",&t);
	}
	printf("%d %d\n",b,c);
	return c+1;
}