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

int main(int argc, char* argv[])
{
	int n,k,a[1000],i,j,t=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<n/2+1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k) {t=1;break;}
		}
		if(t==1) break;
	}
	if(t==1)printf("yes");
	else printf("no");
	return 0;
}
