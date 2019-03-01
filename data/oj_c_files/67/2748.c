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
	int n;
	scanf("%d",&n);
	int m,l;
	scanf("%d %d",&m,&l);
	float eff=(float)l/(float)m;
	for(int i=1;i<n;i++)
	    {
		int o,p;
		scanf("%d %d",&o,&p);
		float exp=(float)p/(float)o;
		if(exp-eff>0.05)
		   printf("better\n");
		else
		   if(exp-eff<-0.05)
		      printf("worse\n");
		else
		   printf("same\n");
		}
}