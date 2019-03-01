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
	int a[100];
	int d,i,t,p=0;
	while(true)
	{
		t=0;
		for(i=0;i<100;i=i+1) a[i]=0;
		while (true)
		{
			scanf("%d",&d);
			if ((d==0)||(d==-1))  break;
			a[d]=1;
		}
		if (d==-1)  break;
		else
		{
			if(p)  printf("\n");
			p=p+1;
		for(i=1;i<50;i=i+1)
					if ((a[i])&&(a[2*i])) t++;
				printf("%d",t);
		}
	}
	return 0;
}