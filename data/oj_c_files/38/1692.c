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
	int k,n[100];
	double in[100][100]={0.0},a=0.0,s=0.0;
	scanf("%d",&k);
	for(int i=0;i<k;i++) 
	{
		scanf("%d",&n[i]);
		for(int j=0;j<n[i];j++)
		{
			scanf("%lf",&in[i][j]);
			a+=in[i][j];
		}
		a=a/n[i];
		for(int jj=0;jj<n[i];jj++)
		{
			s+=(in[i][jj]-a)*(in[i][jj]-a);
		}
		s=s/n[i];
		s=sqrt(s);
		printf("%.5lf\n",s);
		a=0.0;
		s=0.0;
	}
	return 0;
}