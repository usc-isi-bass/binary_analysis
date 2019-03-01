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
	int i,n,m1=2,m2=0;
	int zzz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&zzz[i]);
	}
	for(i=0;i<n;i++){
		if(zzz[i]>m1){
			m1=zzz[i];
		}
	}
	for(i=0;i<n;i++){
		if(zzz[i]==m1){
			zzz[i]=0;
			break;
		}
	}
	for(i=0;i<n;i++){
		if(zzz[i]>m2){
			m2=zzz[i];
		}
	}
	printf("%d\n%d\n",m1,m2);
	return 0;
}