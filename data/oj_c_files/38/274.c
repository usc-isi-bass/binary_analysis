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

int main(){
	int k,n[100],i,j,m;
	double x[100][100],ave[100]={0.0},sum[100]={0.0},s[100]={0.0};
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[i][j]);
			ave[i]+=x[i][j];
		}
		ave[i]=ave[i]/n[i];
		for(m=0;m<n[i];m++)
		{
			sum[i]+=(x[i][m]-ave[i])*(x[i][m]-ave[i]);
		}
		s[i]=sqrt(sum[i]/n[i]);

	}

	for(i=0;i<k;i++)
	{
		printf("%.5f\n",s[i]);

	}
	return 0;


}