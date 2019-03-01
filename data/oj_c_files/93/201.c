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
	int a[4],m,i,j,b;
	scanf("%d",&m);
	for(i=3,b=0,j=1;j<=3;j++)
	{
		a[j]=m%i;
		if(a[j]==0)
		b=b+i;
		i=i+2;
	}
	switch(b)
	{
	case 0:printf("n");break;
	case 3:printf("3");break;
	case 5:printf("5");break;
	case 7:printf("7");break;
	case 8:printf("3 5");break;
	case 10:printf("3 7");break;
	case 12:printf("5 7");break;
	case 15:printf("3 5 7");break;
	}
	return 0;
}