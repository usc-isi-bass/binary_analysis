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
	int n,A[50003],i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
		A[i]=1;
	for(i=4;i<=n;i+=2)
		A[i]=0;
	A[1]=0;
	for(i=3;i<sqrt((double)n);i+=2)//???????
		for(k=2;k*i<=n;k++)
		{
			A[k*i]=0;
		}
	for(i=6;i<=n;i+=2)
		for(j=2;j<i;j++)
			if(A[j]==1&&A[i-j]==1)//?????????
			{
				cout<<i<<"="<<j<<"+"<<i-j<<endl;
				break;
			}
	return 0;
}

