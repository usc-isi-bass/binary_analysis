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
    int c,std,a=0,i=0,flag=1;
    int boy[100]={0};
    while((c=getchar())!='\n')
    {    if(flag==1)
	{
		std=c;
		flag=0;
	}
	if(c==std)
	{
		boy[i]=a;
		i++;
	}
	else
	{
		printf("%d %d\n",boy[--i],a);
	}
	a++;
    }
	return 0;
}
