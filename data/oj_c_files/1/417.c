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

int sum=0;                             //???????
void fj(int n,int m)
{
	int i;                             //?????
	for(i=m;i<=sqrt(n);i++)            //???????
	{
         if(n%i==0)
		 {
			 sum++;
			 fj(n/i,i);                //???????
		 }
	}
}
int main()
{
	int j,N;                           //??????????????
	int a[100];                        //?????
	cin>>N;
	for(j=1;j<=N;j++)
	{
		cin>>a[j];                     //?????
	}
	for(j=1;j<=N;j++)
	{
		sum=0;
		fj(a[j],2);                    //?????
		cout<<sum+1<<endl;
	}
	return 0;
}
