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

double k[1000][2];
double work(int i,int j)
{
	double result;
	result=sqrt( pow(k[i][0]-k[j][0],2) +pow( k[i][1] - k[j][1] ,2 )    );
	return result;
}
int main()
{
	double max=0;
	int m,i=0,j;
	cin>>m;
	double s;
	for(i=0;i<m;i++)
	{
		cin>>k[i][0]>>k[i][1];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			s=work(i,j);
			if(s>max)
				max=s;
		}
	}
	cout<<max<<endl;
	return 0;
}