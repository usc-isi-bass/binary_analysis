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
	int a[16],n,i,j,sum=0;

	a[0]=1;
	while(1){
		for(i=1;a[i-1]!=0;i++){
			scanf("%d",&a[i]);
			if(a[1]==-1) goto end;
		}
		n=i-1;
		for(i=1;i<n;i++){
			for(j=1;j<n;j++){
			if(i==j) continue;
			if(a[i]==2*a[j]) sum++;
			}
		}
		printf("%d\n",sum);
		for(i=1;i<16;i++)
		a[i]=0;
		sum=0;
	}
end:;
}