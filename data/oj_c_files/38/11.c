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
	int k,n,i,j;
	double a[1000],s1[100]={0},s2[100]={0},s[100],aver[100];
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%d",&k);
		for(i=0;i<k;i++){
			scanf("%lf",&a[i]);
			s1[j]+=a[i];
		}
		aver[j]=s1[j]/k;
		for(i=0;i<k;i++){
			s2[j]+=(a[i]-aver[j])*(a[i]-aver[j]);
		}
		s[j]=sqrt(s2[j]/k);
	}
	for(j=0;j<n;j++){
		printf("%.5lf\n",s[j]);
	}
	return 0;
}