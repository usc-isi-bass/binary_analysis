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
	int a,b,c,d,min,max;
	scanf("%d\n%d\n%d",&a,&c,&d);
	min=(d<c)?d:c;
	max=(d>=c)?d:c;
	if(a>2)
	for(;a>=3;a--)
	{ 
		scanf("%d",&b);
		if(b>max){min=max;max=b;}
		else if(b>min)min=b;
	
	}
	printf("%d\n%d",max,min);
}


