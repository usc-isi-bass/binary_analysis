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
	
	int max1=0;
	int max2=0;
	int a;
	int count=0;
	do
	{
		scanf("%d",&a);
		if(a>max1)
		{
			max2=max1;
			max1=a;
		}
		else if(a<max1&&a>max2)
			max2=a;
		count++;
	}
	while(getchar()!='\n');
	if(max2==0||count==1)
		printf("No\n");
	else
		printf("%d\n",max2);
	return 0;
}