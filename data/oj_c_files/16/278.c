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
	int a,temp,p,q; 
	scanf("%d",&a); 
	temp=a; 
	if(a!=0)
	{while(temp%10-temp!=0||(temp%10-temp==0&&q>=10)) 
	{ 
		p=temp%10; 
		printf("%d",p); 
		q=temp;
		temp=temp/10; 
	}
	}
	else
		printf("0");
	printf("\n");
}