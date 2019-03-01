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
	int i,n,k,sum=1,A[5]; //????????????
	cin >> n;
	k=n;
	while(k>=10)          //???????
	{
		k=k/10;
		sum=sum+1;
	}
	for(i=0;i<sum;i++)   //????? ?
	{
		A[i]=n%10;
	    n=n/10;
	}
	for(i=0;i<sum;i++)   //?????
		cout << A[i];
	return 0;
}