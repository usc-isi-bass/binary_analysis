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
	int n,a[310],i,temp;
	double b[310],max=-100,ave,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	ave=s/n;
	for(i=0;i<n;i++)
	{
		b[i]=fabs(ave-a[i]);
		if(b[i]>max)max=b[i];
	}
	for(i=0;i<n;i++)
		if(fabs(b[i]-max)<0.0001){
			printf("%d",a[i]);
			temp=i;
			break;
		}
	for(i=temp+1;i<n;i++)
		if(b[i]==max)
			printf(",%d",a[i]);
	return 0;
}

