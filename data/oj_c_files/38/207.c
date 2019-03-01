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
	int n,num,i,j;
	double arr[105],sum,s,a,*p=arr;
	cin>>n;
	while(n--)
	{
		sum=0;
		cin>>num;
		for(j=0;j<num;j++)
		{
			cin>>*(p+j);
			sum+=*(p+j);
		}
		a=sum/num;
		sum=0;
		for(j=0;j<num;j++)
			sum+=(*(p+j)-a)*(*(p+j)-a);
		s=sqrt(sum/num);
		printf("%.5lf\n",s);
	}
	return 0;
}
