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
	int n,a[300],i,x,b[300],y=0,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		c=0;
		if(i==0){
		  b[y]=a[i];
		  y++;}
		else {
			for(x=0;x<i;x++){
				if(a[i]!=a[x])
					c++;
			}
			if(c==i){
				b[y]=a[i];
				y++;}
		}
	}
	printf("%d",b[0]);
	for(i=1;i<y;i++)
		printf(",%d",b[i]);


	return 0;
}
