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


void main()
{
	void change(int *p1,int *p2);
    int a,b;
	scanf("%d %d",&a,&b);
	while(a!=b)
	{
		if(a>b) 
		{
			change(&a,&b);
		}
		b=b/2;
	}
	printf("%d\n",a);
}

void change(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}