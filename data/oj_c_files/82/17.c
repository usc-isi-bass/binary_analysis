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
	int n,i,j,k,a[100],b[100],max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	max=0;
	j=0;
	for(k=0;k<n;k++){
		if(a[k]<=140&&a[k]>=90&&b[k]>=60&&b[k]<=90)
			j++;
		else{
			if(j>max)
				max=j;
			j=0;
		}
	}
	if(j>max)
		max=j;
	printf("%d\n",max);
	return 0;
}