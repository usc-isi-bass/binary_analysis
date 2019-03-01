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

void main(){
	int a[300];
	int max,min,i;
	max=-1;
	min=-1;
	char c;
	i=0;
	while(i<=300)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			min=max;
			max=a[i];
		}
		if(a[i]>min&&a[i]<max)
		{
			min=a[i];
		}
		i=i+1;
		if(getchar()!=',')
		break;
	}
	if(min==-1) printf("No");
	else printf("%d",min);
}