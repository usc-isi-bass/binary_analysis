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
	int bill,pay[6],unit[6]={100,50,20,10,5,1},i,j;
	scanf("%d",&bill);
    for(i=1;i<=6;i++)
	{
		pay[i-1]=bill/unit[i-1];
		bill-=pay[i-1]*unit[i-1];
	}
	for(j=1;j<=6;j++)
		printf("%d\n",pay[j-1]);
	return 0;
}