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
	int n,k,i,j,ib=1;
	int a[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		if(ib){
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{	printf("yes");
			ib=0;
			break;}
			if((i==n-2)&&(a[i]+a[j]!=k))
				printf("no");
		}}
}
	