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

main()
{int a[12],i,b,w;
scanf("%d",&w);
a[1]=w+12;
a[2]=a[1]+3;
a[3]=a[2];
a[4]=a[3]+3;
a[5]=a[4]+2;
a[6]=a[5]+3;
a[7]=a[6]+2;
a[8]=a[7]+3;
a[9]=a[8]+3;
a[10]=a[9]+2;
a[11]=a[10]+3;
a[12]=a[11]+2;
i=1;
do{
	b=a[i]%7;
	if(b==5)
	{printf("%d\n",i);}
	i=i+1;}while(i<=11);
	b=a[9]%7;
	if(b==5)
	printf("12");
} 