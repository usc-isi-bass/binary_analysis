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
	int t,m,n,i,j,sum;
	int a[101][101];
	cin>>t;
	for(;t>0;t--)
	{
		cin>>m>>n;
		sum=0;//????
		for(i=0;i<m;i++)
			for(j=0;j<n;j++) cin>>*(*(a+i)+j);//????
		for(i=0;i<m;i++) sum+=*(*(a+i));//???
		for(i=0;i<m;i++) sum+=*(*(a+i)+n-1);//????
		for(j=1;j<n-1;j++) sum+=*(*(a)+j);//???
		for(j=1;j<n-1;j++) sum+=*(*(a+m-1)+j);//????
		cout<<sum<<endl;
	}
	return 0;
}