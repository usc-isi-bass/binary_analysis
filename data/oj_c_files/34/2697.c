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

int fun1(int i)
{
//printf("fun1");
	int j;
	j=i*3+1;
	printf("%d*3+1=%d\n",i,j);
	return j;
}



int fun2(int i)
{
	//printf("fun2");
	int j;
	j=i/2;
	printf("%d/2=%d\n",i,j);
	return j;
}


int main()
{
	int i;
	scanf("%d",&i);
	do
	{
		if(i%2==1&&i!=1)
			i=fun1(i);
		else if(i%2==0)
			i=fun2(i);
	}
	while(i!=1);
	printf("End");

	return 0;
}

