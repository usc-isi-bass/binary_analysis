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
{
		int a[12],w,b[12]={0},i;
		a[0]=31;
		a[1]=28;
		a[2]=31;
		a[3]=30;
		a[4]=31;
		a[5]=30;
		a[6]=31;
		a[7]=31;
		a[8]=30;
		a[9]=31;
		a[10]=30;
		a[11]=31;
		scanf("%d",&w);
		b[0]=(w+12)%7;
		for(i=1;i<12;i++)
		b[i]=(b[i-1]+a[i-1])%7;
		for(i=0;i<12;i++)
		{
			if(b[i]==5)
			printf("%d\n",i+1);
		}
		 
}



