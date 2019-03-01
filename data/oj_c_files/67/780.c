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
	int i,n;
	int s[100],t[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&s[i],&t[i]);
	}
	float k;
	k=(double)t[0]/s[0];
	for(i=1;i<n;i++){
		if((double)t[i]/s[i]-k>0.05)
		{
			printf("better\n");
		}
		else if((double)t[i]/s[i]-k<-0.05)
		{
			printf("worse\n");
		}
		else 
		{
			printf("same\n");
		}
	}
	return 0;
}