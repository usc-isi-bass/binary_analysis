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
	int a[100]={0},k,i,j;
	double b[100]={0},cnt,average,s;
	cin>>k;
	for(i=0;i<k;i++)
	{
		average=0;
		cnt=0;
		s=0;
		cin>>a[i];
		for(j=0;j<a[i];j++)
		{
			cin>>b[j];
			average+=b[j];
		}
		average=average/a[i];
		for(j=0;j<a[i];j++)
			cnt+=(b[j]-average)*(b[j]-average);
		cnt=cnt/a[i];
		s=sqrt(cnt);
		cout<<fixed<<setprecision(5)<<s<<endl;
	}
	return 0;
}