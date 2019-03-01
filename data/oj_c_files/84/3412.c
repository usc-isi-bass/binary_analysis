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
	int n,a[100],b,c,i;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++){
		scanf("%d",&(a[i]));
		if((a[i-1])<(a[i])){
			b=a[i];
		}
		
	}
	c=a[0];
	for(i=0;i<n;i++){
		if(c<a[i]&&a[i]<b){
			c=a[i];
		}

	}
	printf("%d\n",b);
	printf("%d\n",c);
	return 0;
}
