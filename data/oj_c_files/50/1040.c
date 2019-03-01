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


int dijitian(int m,int d)
{
	int q=0;
	q=d;
	switch(m)
	{
		case 12: q+=30;
		case 11: q+=31;
		case 10: q+=30;
		case 9: q+=31;
		case 8: q+=31;
		case 7: q+=30;
		case 6: q+=31;
		case 5: q+=30;
		case 4: q+=31;
		case 3: q+=28;
		case 2: q+=31;
		case 1: q+=0;
	}
	return q;
}

int main()
{
	int d,k,i,j;
	scanf("%d",&k);
	for(i=1;i<=12;i++)
	{
		d=dijitian(i,13);
		j=d%7+k-1;
		if (j>7) j-=7;
		if (j==5) printf("%d\n",i);
	}
	return 0;
}
