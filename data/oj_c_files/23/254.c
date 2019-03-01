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

int main()
{
	char q[100][100]={0};
	int n,i,j;
	char c;
	for(int i1=0;i1<=99;i1++)
	{
		scanf("%s",q[i1]);
		c=getchar();
		if(c=='\n') {n=i1;break;}
	}
	for(i=n;i>=1;i--)
	{
		printf("%s ",q[i]);
	}
	printf("%s",q[0]);
	return 0;
}