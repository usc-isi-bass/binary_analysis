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
	float a[1000];
    int i = 1;
	a[0] = 0;
	int b[1002];
	int m = 3;
	b[1] = 1;
	b[2] = 2;
	while(m<1001)
	{
		b[m] = b[m-1] +b[m-2];
		m++;
	}
	
	while(i<1000)
	{
		a[i] = a[i-1] + (float)b[i+1] / b[i];
		i++;
	}
	int n;
	scanf("%d",&n);

	int k=1;

	 while(k<=n)
	 {
		 int p;
		 scanf("%d",&p);
		 printf("%.3f\n",a[p]);
		 k++;
	 }
	 return 0;
}