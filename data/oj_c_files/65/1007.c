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
	int a[300],b[300],n,i,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==0&&b[i]==1)
			k++;
		if(a[i]==0&&b[i]==2)
			k--;
		if(a[i]==1&&b[i]==2)
			k++;
		if(a[i]==1&&b[i]==0)
			k--;
		if(a[i]==2&&b[i]==0)
			k++;
		if(a[i]==2&&b[i]==1)
			k--;
	}
	if(k>0)
		printf("A");
	else if(k<0)
		printf("B");
	else
		printf("Tie");
	return 0;

}
