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
	int n,i,x=2,y,m,t=1;
	scanf("%d",&n);
	for (i=6;i<=n;i+=2) {
	
		for (x=3;x<=(i/2);x++) {
				t=1;
				if (x%2==0)
					t=0;
				else {
			for (m=3;m<=sqrt(x);m+=2) {
				if (x%m==0)
					t=0;
			}
				}
			if (t==1) {
				y=i-x;
				if (y%2==0)
					t=0;
				else {
				for (m=3;m<=sqrt(y);m+=2) {
				if (y%m==0)
					t=0;
				}
				}
				if (t==1) {
					printf("%d=%d+%d\n",i,x,y);
				
					break;
				}
			}


		}
	}
	return 0;
}


