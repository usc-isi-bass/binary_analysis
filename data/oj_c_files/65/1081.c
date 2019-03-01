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
	int sumA=0,sumB=0,i;
	int n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			sumA++;
		if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
			sumB++;
		if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==1))
			continue;
	}
	if(sumA>sumB)
		printf("A");
	if(sumB>sumA)
		printf("B");
	else if(sumA==sumB)
		printf("Tie");
	return 0;
}