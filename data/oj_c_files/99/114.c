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

void main()
{
	int i,n,x[100],a=0,b=0,c=0,d=0;
	float A[4];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&x[i]);
	    if(x[i]>=1&&x[i]<=18)a++;
		else if(x[i]>=19&&x[i]<=35)b++;
		else if(x[i]>=36&&x[i]<=60)c++;
		else d++;
	}
	A[0]=a*100.0/n;
	A[1]=b*100.0/n;
	A[2]=c*100.0/n;
	A[3]=d*100.0/n;
	printf("1-18: %.2f%%\n",A[0]);
	printf("19-35: %.2f%%\n",A[1]);
	printf("36-60: %.2f%%\n",A[2]);
	printf("60??: %.2f%%\n",A[3]);
}