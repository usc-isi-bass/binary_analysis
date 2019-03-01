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
	double bz,sj;
	int n1,n2,n,i,p;
	char jy1[501],jy2[501];
	scanf("%lf",&bz);
	scanf("%s",jy1);
	scanf("%s",jy2);
	p=0;
	n1=strlen(jy1);
	n2=strlen(jy2);
	if(n1==n2){
		n=n1;
	}else{
		printf("error");
		return 0;
	}
	for(i=0;i<n;i++){
		if((jy1[i]!=65&&jy1[i]!=84&&jy1[i]!=67&&jy1[i]!=71)||(jy2[i]!=65&&jy2[i]!=84&&jy2[i]!=67&&jy2[i]!=71)){
			printf("error");
			return 0;
		}else{
		if(jy1[i]==jy2[i]){
			p++;
		}else{
			p=p;
		}}
	}
	sj=1.0*p/n;
	if(sj>=bz){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
