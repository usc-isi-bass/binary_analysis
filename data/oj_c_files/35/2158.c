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
	int a[8][8];
	int m,n,i,j,b,k,tf=1,z=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++){
		k=a[i][0];b=0;
		for(j=0;j<n;j++)
			if(k<a[i][j]){
				k=a[i][j];
				b=j;
			}
		for(j=0;j<m;j++)
			if(k>a[j][b])
				tf=0;
		if(tf==1){
			z=1;
			printf("%d+%d\n",i,b);
			goto end;
		}
	}
    end: if(z==0)
			 printf("No\n");
	return 0;
}