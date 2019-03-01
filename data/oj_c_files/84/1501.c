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
	int a,b,c,i;
	int z[100];
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&(z[i]));
	}
	for(i=0;i<a;i++){
		if(i==0){
			b=z[i];
			c=0;
		}
		else{
			if (z[i]>b){
			b=z[i];
			c=0;
			}
		}
	}
	printf("%d\n",b);
	for(i=0;i<a;i++){
		if(z[i]<b&&z[i]>c){
			c=z[i];
		}
	}
	printf("%d\n",c);
	return 0;
}