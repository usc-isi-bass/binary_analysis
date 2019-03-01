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
	int n,i;
	int s;
	scanf("%d",&n);
	s=n;
	if(n==1){
		printf("End");
	}
	else{
		for(s=s;s!=1;i++){
			if(n%2==0){
				s=s/2;
				printf("%d/2=%d\n",n,s);
				n=s;
			}
			else{
				s=s*3+1;
				printf("%d*3+1=%d\n",n,s);
				n=s;
			}
		}
		printf("End");
	}
	return 0;
}

