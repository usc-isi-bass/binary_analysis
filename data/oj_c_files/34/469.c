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
    int n,s,t,i=2;
	scanf("%d",&n);
	s=n;
	if(n==1)
		printf("End");
	else {
	while(i!=1){
		if(s%2==0){
			t=s/2;
			printf("%d/2=%d\n",s,t);
            s=t;
		}
        else{
            t=s*3+1;
			printf("%d*3+1=%d\n",s,t);
			s=t;
		}
		i=s;
	}
	printf("End\n");
	}
	return 0;
}

