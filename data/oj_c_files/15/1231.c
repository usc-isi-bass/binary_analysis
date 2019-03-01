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
	int n,a[1000000],b,i,u_r,u_c,l_r,l_c,count;
	scanf("%d",&n);
	b=n*n;
	for(i=0;i<b;i++)
		scanf("%d",&a[i]);
	for(i=0;i<b;i++){
		if(a[i]==0){
			u_r=i/n;
			u_c=i%n-1;
			break;
		}
	}
	for(i=b-1;i>=0;i--){
		if(a[i]==0){
			l_r=i/n;
			l_c=i%n-1;
			break;
		}
	}
	count=(l_r-u_r-1)*(l_c-u_c-1);
	printf("%d",count);
}


