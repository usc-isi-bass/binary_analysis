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
	int n,i;
	scanf("%d",&n);
	int age[100];
	int a=0,b=0,c=0,d=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
		if(age[i]<=18)
			a++;
		else if(age[i]>18&&age[i]<=35)
			b++;
		else if(age[i]>35&&age[i]<=60)
			c++;
		else
			d++;
	}
	printf("1-18: %.2lf",(a*1.00)*100/n);
	printf("%%\n");
	printf("19-35: %.2lf",(b*1.00)*100/n);
	printf("%%\n");
	printf("36-60: %.2lf",(c*1.00)*100/n);
	printf("%%\n");
	printf("60??: %.2lf",(d*1.00)*100/n);
	printf("%%\n");
	return 0;
}