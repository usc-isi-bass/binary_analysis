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
	int n,i,a,b,s,j;
	a=0;
	b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&s,&j);
		if((s==0&&j==1)||(s==1&&j==2)||(s==2&&j==0)){
			a++;
		}else if((j==0&&s==1)||(j==1&&s==2)||(j==2&&s==0)){
			b++;
		}else if((s==0&&j==0)||(s==1&&j==1)||(s==2&&j==2)){
			a=a+0;
			b=b+0;
		}
	}
	if(a>b)
		printf("A");
	else if(a<b)
		printf("B");
	else if(a=b)
		printf("Tie");
	return 0;
}
