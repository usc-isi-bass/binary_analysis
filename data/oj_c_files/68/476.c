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

int iszs(int x) {
	int a,b=0;
	for (a=2;a<=sqrt(x);a++) {
		if (x%a!=0) continue;
		else {
		  b=1;
		  break;
		}
	}
return b;
}

void main()
{
		long int i,n,a=2,c;
		scanf("%d",&n);
		for(i=6;i<=n;i=i+2)
		{
			for(a=2;a<=i/2;a++)
			{
				if(iszs(a)==0){
					c=i-a;
					if(iszs(c)==0) {printf("%d=%d+%d\n",i,a,c);break;}
				}
			}
		}

	
}
