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
	int n, i, x[5]={3,5,7,1000,1000};
	scanf("%d",&n);
	for(i=0; i<3; i++)
	{
		if(n%x[i]==0&&n%x[i+1]!=0&&n%x[i+2]!=0)
			printf("%d" ,x[i]);
		else if(n%x[i]==0&&(n%x[i+1]==0||n%x[i+2]==0))
			printf("%d ", x[i]);
	}
	if(n%3!=0&&n%5!=0&&n%7!=0)
		printf("n");
	return 0;
}
