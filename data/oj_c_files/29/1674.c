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
	int i=1;
	int p=1;
	float sum=0;
	float m=1;
	float q=2;
	float k;

	int a;

	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&a);
		while(p<=a)
		{
			sum= (float)sum+(q/m);
			k=q;
			q=q+m;
			m=k;
			p=p++;


		}
		p=1;
		printf("%.3f\n",sum);
		m=1;
		q=2;
i=i++;
sum=0;
	}
	return 0;

}
