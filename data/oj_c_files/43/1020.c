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
	int m,n;
	int i,j,flag1,flag2;
	scanf("%d",&m);
	for(n=2;n<=m/2;n++){
		flag1=0;
		flag2=0;
		for(i=2;i<n;i++){
			if(n%i==0){
				flag1=1;
				break;
			}
		}

		for(j=2;j<m-n;j++){
			if((m-n)%j==0){
				flag2=1;
				break;
			}
		}
		if(!flag1&&!flag2)
			printf("%d %d\n",n,m-n);
	}
}