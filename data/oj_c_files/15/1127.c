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
	int x1,y1,x2,y2;
	int n,i,j,t,area;
	int status=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			scanf("%d",&t);
			if(t==0){
				if(status==0){
					x1=i;
					y1=j;
					status=1;
				}
				x2=i;
				y2=j;
			}
		}
		area=(x2-x1-1)*(y2-y1-1);
		printf("%d",area);
		return 0;
}