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

int main(){
	int a[27]={0},b[27]={0},k,i,j,m=1;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{scanf("%d",&a[i]);b[i]=1;}
	for(i=1;i<k;i++)
		for(j=0;j<i;j++)
			if(a[j]>=a[i]&&b[j]+1>b[i])b[i]=b[j]+1;
	for(i=0;i<k;i++)
		if(b[i]>m)m=b[i];
	printf("%d",m);
}
