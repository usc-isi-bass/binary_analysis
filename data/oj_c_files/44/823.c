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

int inverse(int a)
{int i=0,b=0,c=0;
	do
	{
		if(a<0){c=1;a=fabs(a);}
		b=b*10+a%10;
		a/=10;
		i++;
	}
	while(a>0);
	if(c==1)b=-b;
	return b;
}
void main()
{
	int i,num;
    for(i=0;i<6;i++)
	{
		scanf("%d",&num);
		printf("%d\n",inverse(num));
	}
}
