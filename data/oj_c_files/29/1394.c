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
	int m,n;
	float a=1,b=2,c,s=0;
	scanf("%d",&m);
	float *result=(float *)malloc(sizeof(float)*m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(int k=0;k<n;k++)
		{
			s+=b/a;
			c=a+b;
			a=b;
			b=c;
			
		}
		result[i]=s;
		s=0;
		a=1;
		b=2;
	}
	for(int i=0;i<m;i++) printf("%.3f\n",result[i]);
	return 0;
}