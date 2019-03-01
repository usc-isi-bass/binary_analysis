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
	int n,k[100];
	double num[100][100],average;//?????
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k[i];
		for(int j=0;j<k[i];j++)
			cin>>num[i][j];
	}
	for(int i=0;i<n;i++)
	{
		double total=0.0,sum=0.0,answer;
		for(int j=0;j<k[i];j++)
		  total+=num[i][j];
		average=total/k[i];
		for(int j=0;j<k[i];j++)
			sum+=(num[i][j]-average)*(num[i][j]-average);
		sum=sum/k[i];
		answer=sqrt(sum);
		cout<<fixed<<setprecision(5)<<answer<<endl;
	}
	return 0;
}
