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
	int n,k,i,j;
	double a[1000],ave,sum[100]={0},s1[100]={0},s[100]={0};
    scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
		    scanf("%lf",&a[j]);
			sum[i]+=a[j];
        }
	    ave=sum[i]/n;
        for(j=0;j<n;j++){
            s1[i]+=(a[j]-ave)*(a[j]-ave);
		}
		s[i]=sqrt(s1[i]/n);
	}
    for(i=0;i<k;i++){
        printf("%.5lf\n",s[i]);
	}
	return 0;
}