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
	int r1,r2,i,n,num;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(i==1){
			r1=num;
		    r2=r1;
		}
		else{
			if(r1<num){
				r2=r1;
				r1=num;
			}
			else if(num<r1){
				if(r1==r2)
					r2=num;
				else if(r2<num&&num<r1)
					r2=num;
			}
		}
	}
	printf("%d\n%d\n",r1,r2);
	return 0;
}
	