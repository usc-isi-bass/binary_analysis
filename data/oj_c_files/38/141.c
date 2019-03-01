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
	int k,n,i;double a[100],*p;         //??????????????
	cin >> k;                          //???????
	while(cin >> n)                    //?????
	{
		p=a;double sum=0,num=0;
		memset(p,0,sizeof(p));        
		for(i=0;i<n;i++)
			cin >> p[i];
		for(i=0;i<n;i++)                    //?????
			sum=sum+p[i];
		sum=sum/(double)n;
		for(i=0;i<n;i++)
			num=num+(p[i]-sum)*(p[i]-sum);   //?????
		num=num/(double)n;
		num=sqrt(num);
		printf("%.5f\n",num);                //???
	}
	return 0;
}
