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
	int n,age,a=0,b=0,c=0,d=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age);
		if(age>=0&&age<=18)
			a++;
		if(age>=19&&age<=35)
			b++;
		if(age>=36&&age<=60)
			c++;
		if(age>=61)
			d++;
	}
	printf("1-18: %.2lf%%\n",100.0*a/n);
	printf("19-35: %.2lf%%\n",100.0*b/n);
	printf("36-60: %.2lf%%\n",100.0*c/n);
	printf("60??: %.2lf%%\n",100.0*d/n);
	return 0;
}