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
	int a[16],i,j,h,t=0,flag=1;
	while(flag==1){
		for(i=0;i<16;i++){
			scanf("%d",&a[i]);
			if(a[i]==-1) {flag=0;break;}
			if(a[i]==0) {h=i;break;}
		}
		if(flag==1){
		for(i=0;i<h;i++){
			for(j=0;j<h;j++)
				if(a[i]==2*a[j]) t++;
		}
		printf("%d\n",t);t=0;}
	}
	return 0;
}
